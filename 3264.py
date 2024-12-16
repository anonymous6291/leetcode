class Solution:
    def getFinalState(self, nums: List[int], k: int, m: int) -> List[int]:
        n = len(nums)
        while k > 0:
            i = 0
            j = n - 1
            while j >= 0:
                if nums[i] >= nums[j]:
                    i = j
                j -= 1
            nums[i] *= m
            k -= 1
        return nums
