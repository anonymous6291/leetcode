class Solution:
    def gameOfLife(self, b: List[List[int]]) -> None:
        def g(b, m, n, i, j):
            r = 0
            if i - 1 >= 0:
                r += b[i - 1][j] & 1
                if j - 1 >= 0:
                    r += b[i - 1][j - 1] & 1
                if j + 1 < n:
                    r += b[i - 1][j + 1] & 1
            if j - 1 >= 0:
                r += b[i][j - 1] & 1
            if j + 1 < n:
                r += b[i][j + 1]
            if i + 1 < m:
                r += b[i + 1][j]
                if j - 1 >= 0:
                    r += b[i + 1][j - 1]
                if j + 1 < n:
                    r += b[i + 1][j + 1]
            return r

        m = len(b)
        n = len(b[0])
        for i in range(m):
            for j in range(n):
                v = g(b, m, n, i, j)
                if b[i][j] == 0:
                    if v == 3:
                        b[i][j] |= 2
                else:
                    if v == 2 or v == 3:
                        b[i][j] |= 2
        for i in range(m):
            for j in range(n):
                b[i][j] = (b[i][j] & 2) >> 1
