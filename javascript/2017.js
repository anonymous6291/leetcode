/**
 * @param {number[][]} grid
 * @return {number}
 */
var gridGame = function (grid) {
    let n = grid[0].length;
    let rm2 = 11000000000, ps = 0, ss = 0;
    for (let i of grid[1])
        ps += i;
    for (let i = n - 1; i >= 0; i--) {
        ps -= grid[1][i];
        rm2 = Math.min(rm2, Math.max(ss, ps));
        ss += grid[0][i];
    }
    return rm2;
};
