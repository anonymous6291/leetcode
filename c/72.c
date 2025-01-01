int min(int i, int j) { return (i < j) ? i : j; }

int min3(int i, int j, int k) { return min(i, min(j, k)); }

int find(char* s1, int i, int n1, char* s2, int j, int n2, int** dp) {
    if (i == n1)
        return n2 - j;
    if (j == n2)
        return n1 - i;
    if (dp[i][j] != -1)
        return dp[i][j];
    int res;
    if (s1[i] == s2[j])
        res = find(s1, i + 1, n1, s2, j + 1, n2, dp);
    else
        res = min3(find(s1, i + 1, n1, s2, j + 1, n2, dp),
                   find(s1, i + 1, n1, s2, j, n2, dp),
                   find(s1, i, n1, s2, j + 1, n2, dp)) +
              1;
    dp[i][j] = res;
    return res;
}
int minDistance(char* w1, char* w2) {
    int n1 = strlen(w1), n2 = strlen(w2);
    if (n1 == 0)
        return n2;
    if (n2 == 0)
        return n1;
    int** dp = (int**)malloc(sizeof(int*) * n1);
    for (int i = 0; i < n1; i++) {
        dp[i] = (int*)malloc(sizeof(int) * n2);
        for (int j = 0; j < n2; j++)
            dp[i][j] = -1;
    }
    return find(w1, 0, n1, w2, 0, n2, dp);
}
