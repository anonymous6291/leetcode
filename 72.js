/**
 * @param {string} word1
 * @param {string} word2
 * @return {number}
 */
var minDistance = function (sw1, sw2) {
    var min = function (i, j) {
        return (i < j) ? i : j;
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
            res = min(find(s1, i + 1, s2, j + 1, dp),
                min(find(s1, i + 1, s2, j, dp), find(s1, i, s2, j + 1, dp))) + 1;
        dp[i][j] = res;
        return res;
    };
    let n1 = sw1.length, n2 = sw2.length;
    let dp = [];
    for (let i = 0; i < n1; i++) {
        dp[i] = [];
        for (let j = 0; j < n2; j++)
            dp[i][j] = -1;
    }
    return find(sw1, 0, sw2, 0, dp);
};
