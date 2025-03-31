class Solution {
    private:
    int k;
    vector<vector<bool>>& r;
    vector<vector<bool>>& c,
               vector<vector<bool>>& b;
private:
    bool solve(int i, int j, vector<vector<char>>& board) {
        if (j == 9) {
            if (i == 8)
                return true;
            return solve(i + 1, 0, board, r, c, b);
        }
        if (board[i][j] != '.')
            return solve(i, j + 1, board, r, c, b);
        int bi = (i / 3) * 3 + (j / 3);
        for (int k = 0; k < 9; k++) {
            if (!(r[i][k] || c[j][k] || b[bi][k])) {
                r[i][k] = true;
                c[j][k] = true;
                b[bi][k] = true;
                if (solve(i, j + 1, board, r, c, b)) {
                    board[i][j] = (char)('1' + k);
                    return true;
                }
                r[i][k] = false;
                c[j][k] = false;
                b[bi][k] = false;
            }
        }
        return false;
    }

public:
    void solveSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> r(9, vector<bool>(9, false));
        vector<vector<bool>> c(9, vector<bool>(9, false));
        vector<vector<bool>> b(9, vector<bool>(9, false));
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                if (board[i][j] != '.') {
                    int t = board[i][j] - '1';
                    r[i][t] = true;
                    c[j][t] = true;
                    b[(i / 3) * 3 + (j / 3)][t] = true;
                }
        solve(0, 0, board, r, c, b);
    }
};
