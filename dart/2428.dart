class Solution {
    int max(int i, int j){
        return (i > j) ? i : j;
    }

    int maxSum(List<List<int>> grid) {
        int m = grid.length - 2, n = grid[0].length - 2, maxsum = -1;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                maxsum = max(maxsum, grid[i][j] + grid[i][j + 1] + grid[i][j + 2] + grid[i + 1][j + 1]
                        + grid[i + 2][j] + grid[i + 2][j + 1] + grid[i + 2][j + 2]);
        return maxsum;
    }
}
