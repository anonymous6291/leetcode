int find(int** g, int i, int j, int m, int n, int** dp) {
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
int uniquePathsWithObstacles(int** g, int m, int* cs) {
    int n = *cs;
    int** dp = (int**)malloc(sizeof(int*) * m);
    for (int i = 0; i < m; i++) {
        dp[i] = (int*)malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++)
            dp[i][j] = -1;
    }
    return find(g, 0, 0, m, n, dp);
}
