/**
 * @param {character[][]} mat
 * @return {number}
 */
var maximalSquare = function (mat) {
    var min = function (i, j, k) {
        if (i < j)
            return (i < k) ? i : k;
        return (j < k) ? j : k;
    };
    let res = 0, m = mat.length, n = mat[0].length;
    let dp = []
    for (let i = 0; i <= m; i++) {
        dp[i] = []
        for (let j = 0; j <= n; j++)
            dp[i][j] = 0
    }
    for (let i = 1; i <= m; i++) {
        for (let j = 1; j <= n; j++) {
            if (mat[i - 1][j - 1] == '1') {
                dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]) + 1;
                res = (dp[i][j] > res) ? dp[i][j] : res;
            }
        }
    }
    return res * res;
};
