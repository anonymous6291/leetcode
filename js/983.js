/**
 * @param {number[]} days
 * @param {number[]} costs
 * @return {number}
 */
var mincostTickets = function (days, costs) {
    var min = function (i, j) {
        return (i < j) ? i : j;
    };
    var find = function (days, i, n, td, c, dp) {
        if (i >= n)
            return 0;
        while (i < n && days[i] < td)
            ++i;
        if (i == n)
            return 0;
        if (dp[i] != 0)
            return dp[i];
        td = days[i];
        return dp[i] = min(min(find(days, i + 1, n, td + 1, c, dp) + c[0], find(days, i + 1, n, td + 7, c, dp) + c[1]),
            find(days, i + 1, n, td + 30, c, dp) + c[2]);
    };
    const dp = []
    for (let i = 0; i < 366; i++)
        dp[i] = 0;
    return find(days, 0, days.length, 0, costs, dp);

};
