/**
 * @param {string} s
 * @param {string} t
 * @return {number}
 */
var numDistinct = function (s, t) {
    var find = function (c, s, i, j, n1, n2, dp) {
        if (j == n2)
            return 1;
        if (i == n1 || n1 - i < n2 - j)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        let res = find(c, s, i + 1, j, n1, n2, dp);
        if (c[i] == s[j])
            res += find(c, s, i + 1, j + 1, n1, n2, dp);
        dp[i][j] = res;
        return res;
    }
    let n1 = s.length, n2 = t.length;
    if (n1 < n2)
        return 0;
    const dp = []
    for (let i = 0; i < n1; i++)
        dp.push(new Array(n2).fill(-1))
    return find(s, t, 0, 0, n1, n2, dp);
};
