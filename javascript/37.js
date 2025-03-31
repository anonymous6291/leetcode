/**
 * @param {character[][]} board
 * @return {void} Do not return anything, modify board in-place instead.
 */
var solveSudoku = function (board) {
    let r = [];
    let c = [];
    let b = [];
    let n = "123456789"
    for (let i = 0; i < 9; i++) {
        r.push(new Array(9).fill(false));
        c.push(new Array(9).fill(false));
        b.push(new Array(9).fill(false));
    }
    var solve = function (i, j) {
        if (j == 9) {
            if (i == 8)
                return true;
            return solve(i + 1, 0);
        }
        if (board[i][j] != '.')
            return solve(i, j + 1);
        let bi = parseInt(i / 3) * 3 + parseInt(j / 3);
        for (let k = 0; k < 9; k++) {
            if (!(r[i][k] || c[j][k] || b[bi][k])) {
                r[i][k] = true;
                c[j][k] = true;
                b[bi][k] = true;
                if (solve(i, j + 1, board, r, c, b)) {
                    board[i][j] = n[k];
                    return true;
                }
                r[i][k] = false;
                c[j][k] = false;
                b[bi][k] = false;
            }
        }
        return false;
    };
    for (let i = 0; i < 9; i++)
        for (let j = 0; j < 9; j++)
            if (board[i][j] != '.') {
                let t = board[i][j].codePointAt(0) - 49;
                r[i][t] = true;
                c[j][t] = true;
                b[parseInt(i / 3) * 3 + parseInt(j / 3)][t] = true;
            }
    solve(0, 0, board, r, c, b);
};
