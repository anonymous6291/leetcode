int find(int i, int j, int m, int n, int** dp) {
    if (i == m - 1 && j == n - 1)
        return 1;
    if (i == m || j == n)
        return 0;
    if (dp[i][j] != 0)
        return dp[i][j];
    return dp[i][j] = find(i + 1, j, m, n, dp) + find(i, j + 1, m, n, dp);
}
int uniquePaths(int m, int n) {
    int** dp = (int**)malloc(sizeof(int*) * m);
    for (int i = 0; i < m; i++) {
        dp[i] = (int*)malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++)
            dp[i][j] = 0;
    }
    return find(0, 0, m, n, dp);
}
