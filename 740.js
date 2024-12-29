/**
 * @param {number[]} nums
 * @return {number}
 */
var deleteAndEarn = function (nums) {
    var max = function (i, j) { return (i > j) ? i : j; };
    let m = 0;
    for (let i of nums)
        m = max(m, i);
    m += 1;
    let f = [];
    for (let i = 0; i < m; i++)
        f[i] = 0;
    for (let i of nums)
        ++f[i];
    let dp = [];
    for (let i = 0; i < m; i++)
        dp[i] = 0;
    dp[m - 1] = f[m - 1] * (m - 1);
    dp[m - 2] = max(f[m - 2] * (m - 2), dp[m - 1]);
    for (let i = m - 3; i >= 1; --i)
        dp[i] = max(f[i] * i + dp[i + 2], dp[i + 1]);
    return dp[1];
};
