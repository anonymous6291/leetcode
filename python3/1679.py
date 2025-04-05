class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        nums.sort()
        s = 0
        e = len(nums) - 1
        count = 0
        while s < e:
            t = nums[s] + nums[e]
            if t == k:
                count += 1
                s += 1
                e -= 1
            elif t < k:
                s += 1
            else:
                e -= 1
        return count
