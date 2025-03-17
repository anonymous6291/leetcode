class Solution {
    public int maxSum(int[][] grid) {
        int m = grid.length, n = grid[0].length, maxsum = -1;
        int ps[][] = new int[m][n + 1];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                ps[i][j + 1] = grid[i][j] + ps[i][j];
        for (int i = 0; i + 2 < m; i++)
            for (int j = 1; j + 2 <= n; j++)
                maxsum = Math.max(maxsum,
                        ps[i][j + 2] + ps[i + 2][j + 2] + grid[i + 1][j] - ps[i][j - 1] - ps[i + 2][j - 1]);
        return maxsum;
    }
}
