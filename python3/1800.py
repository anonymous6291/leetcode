class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        s = nums[0]
        ms = nums[0]
        for i in range(1, len(nums)):
            s = nums[i] + (s if (nums[i - 1] < nums[i]) else 0)
            ms = max(ms, s)
        return ms
