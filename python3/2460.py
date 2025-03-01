class Solution:
    def applyOperations(self, nums: List[int]) -> List[int]:
        n = len(nums) - 1
        res = [0] * (n + 1)
        s = 0
        i = 0
        while i <= n:
            if i < n and nums[i] != 0 and nums[i] == nums[i + 1]:
                res[s] = nums[i] * 2
                s += 1
                i += 2
            else:
                if nums[i] != 0:
                    res[s] = nums[i]
                    s += 1
                i += 1
        return res
