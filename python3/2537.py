class Solution:
    def countGood(self, nums: List[int], k: int) -> int:
        m = {}
        count = 0
        s = 0
        f = 0
        n = len(nums)
        for i in range(n):
            l = (m.pop(nums[i]) if nums[i] in m else 0) + 1
            m.setdefault(nums[i], l)
            f += l - 1
            t = s
            while f >= k:
                l = m.pop(nums[t]) - 1
                m.setdefault(nums[t], l)
                f -= l
                t += 1
                if f < k:
                    count += (n - i) * (t - s)
            s = t
        return count
