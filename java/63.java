class Solution {
    public int uniquePathsWithObstacles(int[][] g) {
        int m = g.length, n = g[0].length;
        int dp[][] = new int[m][n];
        for (int i = 0; i < m; i++)
            Arrays.fill(dp[i], -1);
        return find(g, 0, 0, m, n, dp);
    }

    private int find(int g[][], int i, int j, int m, int n, int dp[][]) {
        if (g[i][j] == 1)
            return 0;
        if (i == m - 1 && j == n - 1)
            return 1;
        if (dp[i][j] != -1)
            return dp[i][j];
        if (i + 1 < m)
            dp[i][j] = find(g, i + 1, j, m, n, dp);
        else
            dp[i][j] = 0;
        if (j + 1 < n)
            dp[i][j] += find(g, i, j + 1, m, n, dp);
        return dp[i][j];
    }
}
