class Solution:
    def partitionArray(self, n: List[int], k: int) -> int:
        s = min(n)
        e = max(n) - s + 1
        p = 0
        c = 0
        f = [False] * e
        for i in n:
            f[i - s] = True
        for i in range(e):
            if f[i] and i - p > k:
                p = i
                c += 1
        return c + 1
