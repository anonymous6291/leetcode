class Solution:
    def abs(self, i):
        return -i if i < 0 else i

    def shortestToChar(self, w: str, c: str) -> List[int]:
        n = len(w)
        r = []
        p = [j for j in range(n) if w[j] == c]
        k = 0
        for j in range(n):
            if k + 1 < len(p) and self.abs(p[k] - j) > self.abs(p[k + 1] - j):
                k += 1
            r.append(abs(p[k] - j))
        return r
