class Solution {
    public int maximalSquare(char[][] mat) {
        int res = 0, m = mat.length, n = mat[0].length;
        int dp[][] = new int[m + 1][n + 1];
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (mat[i - 1][j - 1] == '1') {
                    dp[i][j] = Math.min(Math.min(dp[i - 1][j], dp[i - 1][j - 1]), dp[i][j - 1]) + 1;
                    res = (dp[i][j] > res) ? dp[i][j] : res;
                }
            }
        }
        return res * res;
    }
}
