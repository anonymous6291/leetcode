/**
 * @param {number[][]} grid
 * @return {number}
 */
var minPathSum = function (grid) {
    var min = function (i, j) { return (i < j) ? i : j; };

    var find = function (g, i, j, m, n, dp) {
        if (i == m || j == n)
            return 8000000;
        if (i == m - 1 && j == n - 1)
            return g[i][j];
        if (dp[i][j] != -1)
            return dp[i][j];
        return (dp[i][j] = (min(find(g, i + 1, j, m, n, dp), find(g, i, j + 1, m, n, dp)) + g[i][j]));
    }

    let m = grid.length, n = grid[0].length;
    const dp = []
    for (let i = 0; i < m; i++) {
        dp[i] = [];
        for (let j = 0; j < n; j++)
            dp[i][j] = -1;
    }
    return find(grid, 0, 0, m, n, dp);
};
