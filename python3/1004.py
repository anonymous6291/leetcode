class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        n = len(nums)
        c = 0
        p = 0
        mc = 0
        i = 0
        while i < n:
            c += nums[i] ^ 1
            i += 1
            while i < n and c < k:
                c += nums[i] ^ 1
                i += 1
            while c > k:
                c -= nums[p] ^ 1
                p += 1
            if i - p > mc:
                mc = i - p
        return mc
