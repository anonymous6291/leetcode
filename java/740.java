class Solution {
    private int max(int i, int j) {
        return (i > j) ? i : j;
    }

    public int deleteAndEarn(int[] nums) {
        int m = 0;
        for (int i : nums)
            m = max(m, i);
        m += 1;
        int f[] = new int[m];
        for (int i : nums)
            ++f[i];
        int dp[] = new int[m];
        dp[m - 1] = f[m - 1] * (m - 1);
        dp[m - 2] = max(f[m - 2] * (m - 2), dp[m - 1]);
        for (int i = m - 3; i >= 1; --i)
            dp[i] = max(f[i] * i + dp[i + 2], dp[i + 1]);
        return dp[1];
    }
}
