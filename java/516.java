class Solution {
    public int longestPalindromeSubseq(String s) {
        int n = s.length();
        int dp[][] = new int[n][n];
        for (int i = 0; i < n; i++)
            Arrays.fill(dp[i], -1);
        return find(s.toCharArray(), 0, n - 1, dp);
    }

    private int find(char c[], int s, int e, int dp[][]) {
        if (s > e)
            return 0;
        if (s == e)
            return 1;
        if (dp[s][e] != -1)
            return dp[s][e];
        int res;
        if (c[s] == c[e])
            res = find(c, s + 1, e - 1, dp) + 2;
        else
            res = Math.max(find(c, s + 1, e, dp), find(c, s, e - 1, dp));
        dp[s][e] = res;
        return res;
    }
}
