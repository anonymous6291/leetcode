class Solution {
    boolean r[][];
    boolean c[][];
    boolean b[][];
    char board[][];

    public void solveSudoku(char[][] board) {
        r = new boolean[9][9];
        c = new boolean[9][9];
        b = new boolean[9][9];
        this.board = board;
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                if (board[i][j] != '.') {
                    int t = board[i][j] - 49;
                    r[i][t] = true;
                    c[j][t] = true;
                    b[(i / 3) * 3 + (j / 3)][t] = true;
                }
        solve(0, 0);
    }

    private boolean solve(int i, int j) {
        if (j == 9) {
            if (i == 8)
                return true;
            return solve(i + 1, 0);
        }
        if (board[i][j] != '.')
            return solve(i, j + 1);
        int bi = (i / 3) * 3 + (j / 3);
        for (int k = 0; k < 9; k++) {
            if (!(r[i][k] || c[j][k] || b[bi][k])) {
                r[i][k] = true;
                c[j][k] = true;
                b[bi][k] = true;
                if (solve(i, j + 1)) {
                    board[i][j] = (char) (49 + k);
                    return true;
                }
                r[i][k] = false;
                c[j][k] = false;
                b[bi][k] = false;
            }
        }
        return false;
    }
}
