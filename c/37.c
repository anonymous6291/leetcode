bool solve(int i, int j, char** board, bool** r, bool** c, bool** b) {
    if (j == 9) {
        if (i == 8)
            return true;
        return solve(i + 1, 0, board, r, c, b);
    }
    if (board[i][j] != '.')
        return solve(i, j + 1, board, r, c, b);
    int bi = (i / 3) * 3 + (j / 3);
    for (int k = 0; k < 9; k++) {
        if (r[i][k] && c[j][k] && b[bi][k]) {
            r[i][k] = false;
            c[j][k] = false;
            b[bi][k] = false;
            if (solve(i, j + 1, board, r, c, b)) {
                board[i][j] = (char)('1' + k);
                return true;
            }
            r[i][k] = true;
            c[j][k] = true;
            b[bi][k] = true;
        }
    }
    return false;
}

void solveSudoku(char** board, int boardSize, int* boardColSize) {
    bool** r = (bool**)malloc(sizeof(bool*) * 9);
    bool** c = (bool**)malloc(sizeof(bool*) * 9);
    bool** b = (bool**)malloc(sizeof(bool*) * 9);
    for (int i = 0; i < 9; i++) {
        r[i] = (bool*)malloc(sizeof(bool) * 9);
        c[i] = (bool*)malloc(sizeof(bool) * 9);
        b[i] = (bool*)malloc(sizeof(bool) * 9);
        for (int j = 0; j < 9; j++) {
            r[i][j] = true;
            c[i][j] = true;
            b[i][j] = true;
        }
    }
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            if (board[i][j] != '.') {
                int t = board[i][j] - '1';
                r[i][t] = false;
                c[j][t] = false;
                b[(i / 3) * 3 + (j / 3)][t] = false;
            }
    solve(0, 0, board, r, c, b);
}
