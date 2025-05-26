class Solution:
    def printVertically(self, w: str) -> List[str]:
        c = 1
        m = 0
        n = len(w)
        p = 0
        for i in range(n):
            if w[i] == " ":
                m = max(m, i - p)
                p = i + 1
                c += 1
        m = max(n - p, m)
        r = [[0] * c for _ in range(m)]
        i = 0
        for j in range(c):
            for k in range(m):
                if i < n and w[i] != " ":
                    r[k][j] = w[i]
                    i += 1
                else:
                    r[k][j] = " "
            i += 1
        t = []
        for u in r:
            x = c - 1
            while x >= 0 and u[x] == " ":
                x -= 1
            t.append("".join(u[: (x + 1)]))
        return t
