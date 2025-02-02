class Solution:
    def check(self, nums: List[int]) -> bool:
        n = len(nums)
        df = False
        for i in range(1, n):
            if nums[i - 1] > nums[i]:
                if df:
                    return False
                df = True
        return nums[0] >= nums[n - 1] or (not (df))
