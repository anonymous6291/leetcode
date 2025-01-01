/**
 * @param {number} m
 * @param {number} n
 * @return {number}
 */
var uniquePaths = function (m, n) {
    var find = function (i, j, m, n, dp) {
        if (i == m - 1 && j == n - 1)
            return 1;
        if (i == m || j == n)
            return 0;
        if (dp[i][j] != 0)
            return dp[i][j];
        return dp[i][j] = find(i + 1, j, m, n, dp) + find(i, j + 1, m, n, dp);
    };
    var dp = [];
    for (let i = 0; i < m; i++) {
        dp[i] = [];
        for (let j = 0; j < n; j++)
            dp[i][j] = 0;
    }
    return find(0, 0, m, n, dp);
};
