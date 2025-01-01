class Solution {
    public int minPathSum(int[][] grid) {
        int m = grid.length, n = grid[0].length;
        int dp[][] = new int[m][n];
        for (int i = 0; i < m; i++)
            Arrays.fill(dp[i], -1);
        return find(grid, 0, 0, m, n, dp);
    }

    private int find(int g[][], int i, int j, int m, int n, int dp[][]) {
        if (i == m || j == n)
            return Integer.MAX_VALUE;
        if (i == m - 1 && j == n - 1)
            return g[i][j];
        if (dp[i][j] != -1)
            return dp[i][j];
        return (dp[i][j] = (Math.min(find(g, i + 1, j, m, n, dp), find(g, i, j + 1, m, n, dp)) + g[i][j]));
    }
}
