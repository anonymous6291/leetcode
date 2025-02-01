class Solution:
    def isArraySpecial(self, nums: List[int]) -> bool:
        p = (nums[0] & 1) ^ 1
        for i in nums:
            if (i & 1) == p:
                return False
            p ^= 1
        return True
