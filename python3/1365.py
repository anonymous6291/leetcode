class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        n = len(nums)
        f = [0] * 101
        for i in nums:
            f[i] += 1
        ps = 0
        for i in range(101):
            ps += f[i]
            f[i] = ps - f[i]
        for i in range(n):
            nums[i] = f[nums[i]]
        return nums
