class Solution {
    private final int MOD = 1_000_000_007;

    public int numWays(String[] w, String tar) {
        int n = w[0].length();
        int freq[][] = new int[n][26];
        for (String s : w) {
            int i = 0;
            for (char c : s.toCharArray())
                ++freq[i++][c - 'a'];
        }
        long dp[][] = new long[n][tar.length()];
        for (int i = 0; i < n; i++)
            Arrays.fill(dp[i], -1);
        return (int) (find(freq, 0, tar.toCharArray(), 0, dp) % MOD);
    }

    private long find(int freq[][], int i, char c[], int j, long dp[][]) {
        if (j == c.length)
            return 1;
        if (i == freq.length)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        long res = find(freq, i + 1, c, j, dp);
        int f = freq[i][c[j] - 'a'];
        if (f != 0)
            res += find(freq, i + 1, c, j + 1, dp) * f;
        res %= MOD;
        dp[i][j] = res;
        return res;
    }
}
