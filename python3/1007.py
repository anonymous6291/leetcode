class Solution:
    def find(self, t, b, v):
        ts = 0
        bs = 0
        n = len(t)
        for i in range(n):
            if t[i] == v:
                ts += 1
            if b[i] == v:
                bs += 1
            elif t[i] != v:
                return -1
        return min(min(ts, bs), n - max(ts, bs))

    def minDominoRotations(self, t: List[int], b: List[int]) -> int:
        r = len(t)
        for i in range(1, 7):
            v = self.find(t, b, i)
            if v != -1:
                r = min(r, v)
        if r == len(t):
            return -1
        return r
