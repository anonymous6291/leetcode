/**
 * @param {number[][]} grid
 * @return {number}
 */
var minFlips = function (grid) {
    let m = grid.length, n = grid[0].length;
    let rc = 0, cc = 0;
    for (let i = 0; i < m; i++) {
        let s = 0, e = n - 1;
        while (s < e)
            if (grid[i][s++] != grid[i][e--])
                rc++;
    }
    for (let i = 0; i < n; i++) {
        let s = 0, e = m - 1;
        while (s < e)
            if (grid[s++][i] != grid[e--][i])
                cc++;
    }
    return ((rc < cc) ? rc : cc);
};
