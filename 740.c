int max(int i, int j) { return (i > j) ? i : j; }

int deleteAndEarn(int* nums, int n) {
    int m = 0;
    for (int i = 0; i < n; i++)
        m = max(m, nums[i]);
    m += 1;
    int* f = (int*)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++)
        f[i] = 0;
    for (int i = 0; i < n; i++)
        ++f[nums[i]];
    int* dp = (int*)malloc(sizeof(int) * m);
    dp[m - 1] = f[m - 1] * (m - 1);
    dp[m - 2] = max(f[m - 2] * (m - 2), dp[m - 1]);
    for (int i = m - 3; i >= 1; --i)
        dp[i] = max(f[i] * i + dp[i + 2], dp[i + 1]);
    return dp[1];
}
