class Solution:
    def waysToSplitArray(self, nums: List[int]) -> int:
        count = 0
        ps = 0
        ss = sum(nums)
        for i in range(len(nums) - 1):
            ps += nums[i]
            ss -= nums[i]
            if ps >= ss:
                count += 1
        return count
