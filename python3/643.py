class Solution:
    def findMaxAverage(self, n: List[int], k: int) -> float:
        s = sum(n[:k])
        m = s
        for i in range(k, len(n)):
            s = s - n[i - k] + n[i]
            m = max(m, s)
        return m / k
