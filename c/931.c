int min(int i, int j) { return (i < j) ? i : j; }

int find(int** mat, int i, int j, int m, int** dp) {
    if (i == m - 1)
        return (j >= 0 && j < m) ? mat[i][j] : 2000000;
    if (j < 0 || j >= m)
        return 2000000;
    if (dp[i][j] != 2000000)
        return dp[i][j];
    int res =
        min(min(find(mat, i + 1, j - 1, m, dp), find(mat, i + 1, j, m, dp)),
            find(mat, i + 1, j + 1, m, dp)) +
        mat[i][j];
    dp[i][j] = res;
    return res;
}

int minFallingPathSum(int** mat, int m, int* mcs) {
    int** dp = (int**)malloc(sizeof(int*) * m);
    for (int i = 0; i < m; i++) {
        dp[i] = (int*)malloc(sizeof(int) * m);
        for (int j = 0; j < m; j++)
            dp[i][j] = 2000000;
    }
    int minc = find(mat, 0, 0, m, dp);
    for (int i = 1; i < m; i++)
        minc = min(minc, find(mat, 0, i, m, dp));
    return minc;
}
