class Solution:
    def maxScore(self, c: str) -> int:
        n = len(c)
        r = 0
        l = 0
        if c[0] == "0":
            l = 1
        for i in range(1, n):
            if c[i] == "1":
                r += 1
        maxs = r + l
        for i in range(1, n - 1):
            if c[i] == "0":
                l += 1
                maxs = max(maxs, r + l)
            else:
                r -= 1
        return maxs
