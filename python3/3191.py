class Solution:
    def minOperations(self, nums: List[int]) -> int:
        px = nums[0] | (nums[1] << 1) | (nums[2] << 2)
        c = 0
        for i in range(3, len(nums)):
            if (px & 1) == 0:
                px ^= 7
                c += 1
            px = (px >> 1) | (nums[i] << 2)
        if px == 0:
            return c + 1
        if px == 7:
            return c
        return -1
