class Solution:
    def longestNiceSubarray(self, nums: List[int]) -> int:
        n = len(nums)
        po = 0
        f = 0
        r = 0
        ml = 0
        while f < n:
            while (po & nums[f]) != 0:
                po ^= nums[r]
                r += 1
            po |= nums[f]
            f += 1
            if f - r > ml:
                ml = f - r
        return ml
