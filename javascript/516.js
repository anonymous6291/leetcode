/**
 * @param {string} s
 * @return {number}
 */
var longestPalindromeSubseq = function (s) {
    var max = function (i, j) { return (i > j) ? i : j; };

    var find = function (c, s, e, dp) {
        if (s > e)
            return 0;
        if (s == e)
            return 1;
        if (dp[s][e] != -1)
            return dp[s][e];
        let res = 0;
        if (c[s] == c[e])
            res = find(c, s + 1, e - 1, dp) + 2;
        else
            res = max(find(c, s + 1, e, dp), find(c, s, e - 1, dp));
        dp[s][e] = res;
        return res;
    };
    const n = s.length
    const dp = []
    for (let i = 0; i < n; i++)
        dp[i] = new Array(n).fill(-1)
    return find(s, 0, n - 1, dp);
};
