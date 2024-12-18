class Solution:
    def finalPrices(self, p: List[int]) -> List[int]:
        n = len(p)
        for i in range(n):
            for j in range(i + 1, n):
                if p[j] <= p[i]:
                    p[i] -= p[j]
                    break
        return p
