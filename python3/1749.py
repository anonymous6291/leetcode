class Solution:
    def maxAbsoluteSum(self, nums: List[int]) -> int:
        cs1 = 0
        cs2 = 0
        ms1 = -100000
        ms2 = 100000
        for i in nums:
            cs1 = (0 if (cs1 < 0) else cs1) + i
            cs2 = (0 if (cs2 > 0) else cs2) + i
            ms1 = max(ms1, cs1)
            ms2 = min(ms2, cs2)
        return max(ms1, -ms2)
