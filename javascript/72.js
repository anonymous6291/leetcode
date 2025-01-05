/**
 * @param {string} sw1
 * @param {string} sw2
 * @return {number}
 */
var minDistance = function (sw1, sw2) {
    var min = function (i, j, k) {
        if (i < j)
            return (i < k) ? i : k;
        return (j < k) ? j : k;
    };
    var find = function (s1, i, s2, j, dp) {
        if (i == s1.length)
            return s2.length - j;
        if (j == s2.length)
            return s1.length - i;
        if (dp[i][j] != -1)
            return dp[i][j];
        let res;
        if (s1[i] === s2[j])
            res = find(s1, i + 1, s2, j + 1, dp);
        else
            res = min(find(s1, i + 1, s2, j + 1, dp), find(s1, i + 1, s2, j, dp), find(s1, i, s2, j + 1, dp)) + 1;
        dp[i][j] = res;
        return res;
    };
    const n1 = sw1.length, n2 = sw2.length;
    const dp = []
    for (let i = 0; i < n1; i++)
        dp.push(new Array(n2).fill(-1))
    return find(sw1, 0, sw2, 0, dp);
};
