int find(char* c, char* s, int i, int j, int n1, int n2, int** dp) {
    if (j == n2)
        return 1;
    if (i == n1 || n1 - i < n2 - j)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int res = find(c, s, i + 1, j, n1, n2, dp);
    if (c[i] == s[j])
        res += find(c, s, i + 1, j + 1, n1, n2, dp);
    dp[i][j] = res;
    return res;
}

int numDistinct(char* s, char* t) {
    int n1 = strlen(s), n2 = strlen(t);
    if (n1 < n2)
        return 0;
    int** dp = (int**)malloc(sizeof(int*) * n1);
    for (int i = 0; i < n1; i++) {
        dp[i] = (int*)malloc(sizeof(int) * n2);
        for (int j = 0; j < n2; j++)
            dp[i][j] = -1;
    }
    return find(s, t, 0, 0, n1, n2, dp);
}
