int max(int i, int j) { return (i > j) ? i : j; }

int find(char* c, int s, int e, int** dp) {
    if (s > e)
        return 0;
    if (s == e)
        return 1;
    if (dp[s][e] != -1)
        return dp[s][e];
    int res;
    if (c[s] == c[e])
        res = find(c, s + 1, e - 1, dp) + 2;
    else
        res = max(find(c, s + 1, e, dp), find(c, s, e - 1, dp));
    dp[s][e] = res;
    return res;
}

int longestPalindromeSubseq(char* s) {
    int n = strlen(s);
    int** dp = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        dp[i] = (int*)malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++)
            dp[i][j] = -1;
    }
    return find(s, 0, n - 1, dp);
}
