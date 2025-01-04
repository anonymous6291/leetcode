int min(int i, int j, int k) {
    if (i < j)
        return (i < k) ? i : k;
    return (j < k) ? j : k;
}

int maximalSquare(char** mat, int m, int* mcs) {
    int res = 0, n = *mcs;
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
        for (int j = 0; j <= n; j++)
            if (i == 0 || j == 0 || mat[i - 1][j - 1] == '0')
                dp[i][j] = 0;
            else if (mat[i - 1][j - 1] == '1') {
                int r = min(dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]) + 1;
                dp[i][j] = r;
                res = (r > res) ? r : res;
            }
    return res * res;
}
