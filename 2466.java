class Solution {
    public int countGoodStrings(int low, int high, int zero, int one) {
        long dp[] = new long[high + 1];
        Arrays.fill(dp, -1);
        return (int) find(0, low, high, zero, one, dp);
    }

    private long find(int i, int l, int h, int z, int o, long dp[]) {
        if (i > h)
            return 0;
        if (dp[i] != -1)
            return dp[i];
        dp[i] = ((i >= l ? 1 : 0) + find(i + z, l, h, z, o, dp) + find(i + o, l, h, z, o, dp)) % 1_000_000_007;
        return dp[i];
    }
}
