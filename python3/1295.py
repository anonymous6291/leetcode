class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        c = 0
        for i in nums:
            if (i > 9 and i < 100) or (i > 999 and i < 10000) or i == 100000:
                c += 1
        return c
