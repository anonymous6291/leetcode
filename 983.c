int min(int i, int j) { return (i < j) ? i : j; }
int find(int* days, int i, int n, int td, int* c, int* dp) {
    if (i >= n)
        return 0;
    while (i < n && days[i] < td)
        ++i;
    if (i == n)
        return 0;
    if (dp[i] != 0)
        return dp[i];
    td = days[i];
    return dp[i] = min(min(find(days, i + 1, n, td + 1, c, dp) + c[0],
                           find(days, i + 1, n, td + 7, c, dp) + c[1]),
                       find(days, i + 1, n, td + 30, c, dp) + c[2]);
}
int mincostTickets(int* days, int n, int* costs, int cs) {
    int* dp = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        dp[i] = 0;
    return find(days, 0, n, 0, costs, dp);
}
