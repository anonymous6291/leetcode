class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        n = len(nums)
        p = 0
        c = 0
        mc = 0
        i = 0
        while i < n:
            if not nums[i]:
                c += 1
            i += 1
            while c == 2:
                c -= nums[p] ^ 1
                p += 1
            while i < n:
                if not nums[i]:
                    if c == 1:
                        break
                    else:
                        c = 1
                i += 1
            if i - p - 1 > mc:
                mc = i - p - 1
        return mc
