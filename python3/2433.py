class Solution:
    def findArray(self, p: List[int]) -> List[int]:
        for i in range(len(p) - 1, 0, -1):
            p[i] ^= p[i - 1]
        return p
