/**
 * @param {number[][]} grid
 * @return {number[][]}
 */
var onesMinusZeros = function (grid) {
    let m = grid.length, n = grid[0].length;
    let rs = new Array(m).fill(0);
    let cs = new Array(n).fill(0);
    for (let i = 0; i < m; i++) {
        for (let j = 0; j < n; j++) {
            rs[i] += grid[i][j];
            cs[j] += grid[i][j];
        }
    }
    for (let i = 0; i < m; i++)
        for (let j = 0; j < n; j++)
            grid[i][j] = rs[i] * 2 - m + cs[j] * 2 - n;
    return grid;
};
