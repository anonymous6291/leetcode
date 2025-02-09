class Solution:
    def countBadPairs(self, nums: List[int]) -> int:
        n = len(nums)
        m = {}
        count = 0
        for i in range(n):
            t = i - nums[i]
            r = 1
            if t in m:
                r = m.pop(t)
                count += i - r
                r += 1
            else:
                count += i
            m.setdefault(t, r)
        return count
