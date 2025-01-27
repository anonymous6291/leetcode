class Solution:
    def findLucky(self, arr: List[int]) -> int:
        f = [0] * 501
        for i in arr:
            f[i] += 1
        for i in range(500, 0, -1):
            if i == f[i]:
                return i
        return -1
