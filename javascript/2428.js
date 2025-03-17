/**
 * @param {number[][]} grid
 * @return {number}
 */
var maxSum = function (grid) {
    let m = grid.length - 2, n = grid[0].length - 2, maxsum = -1;
    for (let i = 0; i < m; i++)
        for (let j = 0; j < n; j++)
            maxsum = Math.max(maxsum, grid[i][j] + grid[i][j + 1] + grid[i][j + 2] + grid[i + 1][j + 1]
                + grid[i + 2][j] + grid[i + 2][j + 1] + grid[i + 2][j + 2]);
    return maxsum;
};
