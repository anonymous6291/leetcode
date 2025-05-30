class Solution {
    public int uniquePaths(int m, int n) {
        return find(0, 0, m, n, new int[m][n]);
    }

    private int find(int i, int j, int m, int n, int dp[][]) {
        if (i == m - 1 && j == n - 1)
            return 1;
        if (i == m || j == n)
            return 0;
        if (dp[i][j] != 0)
            return dp[i][j];
        return dp[i][j] = find(i + 1, j, m, n, dp) + find(i, j + 1, m, n, dp);
    }
}
