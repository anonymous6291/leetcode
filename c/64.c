int min(int i, int j) { return (i < j) ? i : j; }

int find(int** g, int i, int j, int m, int n, int** dp) {
    if (i == m || j == n)
        return 8000000;
    if (i == m - 1 && j == n - 1)
        return g[i][j];
    if (dp[i][j] != -1)
        return dp[i][j];
    return (dp[i][j] =
                (min(find(g, i + 1, j, m, n, dp), find(g, i, j + 1, m, n, dp)) +
                 g[i][j]));
}

int minPathSum(int** grid, int m, int* cs) {
    int n = *cs;
    int** dp = (int**)malloc(sizeof(int*) * m);
    for (int i = 0; i < m; i++) {
        dp[i] = (int*)malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++)
            dp[i][j] = -1;
    }
    return find(grid, 0, 0, m, n, dp);
}
