class Solution:
    def maxDifference(self, s: str) -> int:
        f = Counter(s)
        o, e = 0, len(s)
        for i in f:
            if f[i] % 2 == 0:
                e = min(e, f[i])
            else:
                o = max(o, f[i])
        return o - e
