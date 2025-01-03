/**
 * @param {number[][]} matrix
 * @return {number}
 */
var minFallingPathSum = function (mat) {
    var min = function (i, j) {
        return (i < j) ? i : j;
    };
    var find = function (mat, i, j, m, dp) {
        if (i == m - 1)
            return (j >= 0 && j < m) ? mat[i][j] : 2000000;
        if (j < 0 || j >= m)
            return 2000000;
        if (dp[i][j] !== undefined)
            return dp[i][j];
        let res = (min(min(find(mat, i + 1, j - 1, m, dp), find(mat, i + 1, j, m, dp)),
            find(mat, i + 1, j + 1, m, dp)) + mat[i][j])
        dp[i][j] = res
        return res;
    };
    let m = mat.length
    let dp = []
    for (let i = 0; i < m; i++)
        dp[i] = []
    let minc = find(mat, 0, 0, m, dp)
    for (let i = 1; i < m; i++)
        minc = min(minc, find(mat, 0, i, m, dp))
    return minc
};
