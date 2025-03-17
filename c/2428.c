#define max(a, b) ((a > b) ? a : b)

int maxSum(int** grid, int m, int* gcs) {
    int n = *gcs, maxsum = -1;
    for (int i = 0; i < m; i++)
        for (int j = 1; j < n; j++)
            grid[i][j] += grid[i][j - 1];
    m -= 2;
    n -= 2;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            int cs = grid[i][j + 2] + grid[i + 2][j + 2] + grid[i + 1][j + 1] -
                     grid[i + 1][j];
            if (j != 0)
                cs -= grid[i][j - 1] + grid[i + 2][j - 1];
            maxsum = max(maxsum, cs);
        }
    return maxsum;
}
