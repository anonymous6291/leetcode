class Solution:
    def maxAdjacentDistance(self, n: List[int]) -> int:
        m = abs(n[0] - n[-1])
        for i in range(1, len(n)):
            m = max(m, abs(n[i] - n[i - 1]))
        return m
