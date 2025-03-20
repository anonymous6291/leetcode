class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        res = [0] * len(nums)
        p = 0
        n = 1
        for i in range(len(nums)):
            if nums[i] < 0:
                res[n] = nums[i]
                n += 2
            else:
                res[p] = nums[i]
                p += 2
        return res
