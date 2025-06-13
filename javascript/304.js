/**
 * @param {number[][]} o
 */
let m;

var NumMatrix = function (o) {
    m = o;
    let r = m.length, c = m[0].length;
    for (let i = 0; i < r; i++)
        for (let j = 1; j < c; j++)
            m[i][j] += m[i][j - 1];
    for (let i = 0; i < c; i++)
        for (let j = 1; j < r; j++)
            m[j][i] += m[j - 1][i];
};

/** 
 * @param {number} x 
 * @param {number} y 
 * @param {number} b 
 * @param {number} c
 * @return {number}
 */
NumMatrix.prototype.sumRegion = function (x, y, b, c) {
    return m[b][c] - (x > 0 ? m[x - 1][c] : 0) - (y > 0 ? m[b][y - 1] : 0)
        + ((x > 0 && y > 0) ? m[x - 1][y - 1] : 0);
};

/** 
 * Your NumMatrix object will be instantiated and called as such:
 * var obj = new NumMatrix(matrix)
 * var param_1 = obj.sumRegion(row1,col1,row2,col2)
 */
