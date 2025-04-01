class Solution:
    def solveNQueens(self, z: int) -> List[List[str]]:
        b = [["."] * z for _ in range(z)]
        c = [False] * z
        p = [[0, 0] for _ in range(z)]
        a = []

        def diagonal(a, b):
            return (a == b) or (a + b) == 0

        def find(i):
            if i == z:
                a.append(["".join(i) for i in b])
                return
            for j in range(z):
                if not c[j]:
                    for k in range(i):
                        if diagonal(p[k][0] - i, p[k][1] - j):
                            break
                    else:
                        c[j] = True
                        b[i][j] = "Q"
                        p[i][0] = i
                        p[i][1] = j
                        find(i + 1)
                        c[j] = False
                        b[i][j] = "."

        find(0)
        return a
