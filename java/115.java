class Solution {
    public int numDistinct(String ss, String tt) {
        int n1 = ss.length(), n2 = tt.length();
        if (n1 < n2)
            return 0;
        int dp[][] = new int[n1][n2];
        for (int i = 0; i < n1; i++)
            Arrays.fill(dp[i], -1);
        return find(ss.toCharArray(), tt.toCharArray(), 0, 0, n1, n2, dp);
    }

    private int find(char c[], char s[], int i, int j, int n1, int n2, int dp[][]) {
        if (j == n2)
            return 1;
        if (i == n1 || n1 - i < n2 - j)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        int res = find(c, s, i + 1, j, n1, n2, dp) + (c[i] == s[j] ? find(c, s, i + 1, j + 1, n1, n2, dp) : 0);
        dp[i][j] = res;
        return res;
    }
}
