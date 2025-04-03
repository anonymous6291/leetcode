class Solution:
    def maximumTripletValue(self, nums: List[int]) -> int:
        res = 0
        diff = 0
        i = 0
        for j in nums:
            res = max(res, diff * j)
            diff = max(diff, i - j)
            i = max(i, j)
        return res
