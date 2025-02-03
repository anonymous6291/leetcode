class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        c = 1
        ml = 1
        n = len(nums)
        for i in range(1, n):
            if nums[i - 1] < nums[i]:
                c += 1
                ml = max(c, ml)
            else:
                c = 1
        c = 1
        for i in range(1, n):
            if nums[i - 1] > nums[i]:
                c += 1
                ml = max(c, ml)
            else:
                c = 1
        return ml
