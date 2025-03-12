class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        n = len(nums)
        nc = 0
        s = 0
        e = n - 1
        while s <= e:
            m = int((s + e) / 2)
            if nums[m] < 0:
                s = m + 1
            else:
                e = m - 1
        nc = s
        s = 0
        e = n - 1
        while s <= e:
            m = int((s + e) / 2)
            if nums[m] > 0:
                e = m - 1
            else:
                s = m + 1
        return max(nc, n - s)
