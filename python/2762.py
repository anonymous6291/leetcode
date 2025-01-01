class Solution:
    def count(self, n: int) -> int:
        return int((n * (n + 1)) / 2)

    def abs(self, n: int) -> int:
        if n < 0:
            return -n
        return n

    def max(self, i: int, j: int) -> int:
        if i > j:
            return i
        return j

    def continuousSubarrays(self, nums: List[int]) -> int:
        total = 0
        n = len(nums)
        min = nums[0]
        max = nums[0]
        s = 0
        si = 0
        bi = 0
        i = 1
        while i < n:
            if self.abs(nums[i] - min) <= 2 and self.abs(nums[i] - max) <= 2:
                if min >= nums[i]:
                    min = nums[i]
                    si = i
                if max <= nums[i]:
                    max = nums[i]
                    bi = i
            else:
                total += self.count(i - s)
                t = i
                if self.abs(nums[i] - min) > 2:
                    if self.abs(nums[i] - max) > 2:
                        i = self.max(si, bi)
                    else:
                        i = si
                else:
                    i = bi
                total -= self.count(t - i - 1)
                s = si = bi = i + 1
                min = max = nums[i + 1]
            i += 1
        return total + self.count(n - s)
