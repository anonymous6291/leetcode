class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        r = [[0] * 9 for _ in range(9)]
        c = [[0] * 9 for _ in range(9)]
        b = [[0] * 9 for _ in range(9)]
        n = "123456789"

        def solve(i, j):
            if j == 9:
                if i == 8:
                    return True
                return solve(i + 1, 0)
            if board[i][j] != ".":
                return solve(i, j + 1)
            bi = int(i / 3) * 3 + int(j / 3)
            for k in range(9):
                if not (r[i][k] or c[j][k] or b[bi][k]):
                    r[i][k] = True
                    c[j][k] = True
                    b[bi][k] = True
                    if solve(i, j + 1):
                        board[i][j] = n[k]
                        return True
                    r[i][k] = False
                    c[j][k] = False
                    b[bi][k] = False
            return False

        for i in range(9):
            for j in range(9):
                if board[i][j] != ".":
                    t = ord(board[i][j]) - 49
                    r[i][t] = True
                    c[j][t] = True
                    b[int(i / 3) * 3 + int(j / 3)][t] = True
        solve(0, 0)
