/**
 * @param {number[][]} b
 * @return {void} Do not return anything, modify board in-place instead.
 */
var gameOfLife = function (b) {
    let m = b.length, n = b[0].length;
    var g = function (i, j) {
        let r = 0;
        if (i - 1 >= 0) {
            r += b[i - 1][j] & 1;
            if (j - 1 >= 0)
                r += b[i - 1][j - 1] & 1;
            if (j + 1 < n)
                r += b[i - 1][j + 1] & 1;
        }
        if (j - 1 >= 0)
            r += b[i][j - 1] & 1;
        if (j + 1 < n)
            r += b[i][j + 1];
        if (i + 1 < m) {
            r += b[i + 1][j];
            if (j - 1 >= 0)
                r += b[i + 1][j - 1];
            if (j + 1 < n)
                r += b[i + 1][j + 1];
        }
        return r;
    };
    for (let i = 0; i < m; i++) {
        for (let j = 0; j < n; j++) {
            let v = g(i, j);
            if (b[i][j] == 0) {
                if (v == 3)
                    b[i][j] |= 2;
            } else {
                if (v == 2 || v == 3)
                    b[i][j] |= 2;
            }
        }
    }
    for (let i = 0; i < m; i++)
        for (let j = 0; j < n; j++)
            b[i][j] = (b[i][j] & 2) >> 1;
};
