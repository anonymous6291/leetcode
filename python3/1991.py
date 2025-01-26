class Solution:
    def findMiddleIndex(self, nums: List[int]) -> int:
        ss = sum(nums)
        ps = 0
        n = len(nums)
        for i in range(n):
            ss -= nums[i]
            if ps == ss:
                return i
            ps += nums[i]
        return -1
