class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        f = [False] * 101
        for i in range(len(nums) - 1, -1, -1):
            if f[nums[i]]:
                return int(i / 3) + 1
            else:
                f[nums[i]] = True
        return 0
