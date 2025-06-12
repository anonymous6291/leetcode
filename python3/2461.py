class Solution:
    def maximumSubarraySum(self, n: List[int], k: int) -> int:
        p = 0
        m = 0
        f = [False] * 100001
        l = len(n)
        s = 0
        for i in range(l):
            while f[n[i]]:
                f[n[s]] = False
                p -= n[s]
                s += 1
            f[n[i]] = True
            p += n[i]
            if i - s + 1 == k:
                m = max(m, p)
                f[n[s]] = False
                p -= n[s]
                s += 1
        if l - s == k:
            return max(p, m)
        return m
