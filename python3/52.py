class Solution:
    def totalNQueens(self, n: int) -> int:
        def count(i, s, c, r, l):
            if i == s:
                return 1
            q = 0
            for j in range(s):
                if not (c[j] or r[i + j] or l[s - i + j]):
                    c[j] = True
                    r[i + j] = True
                    l[s - i + j] = True
                    q += count(i + 1, s, c, r, l)
                    c[j] = False
                    r[i + j] = False
                    l[s - i + j] = False
            return q

        return count(0, n, [False] * n, [False] * 2 * n, [False] * 2 * n)
