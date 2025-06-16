class Solution:
    def maximumDifference(self, n: List[int]) -> int:
        p = n[0]
        m = -1
        for i in range(len(n)):
            if p < n[i]:
                m = max(m, n[i] - p)
            else:
                p = n[i]
        return m
