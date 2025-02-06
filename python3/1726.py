class Solution:
    def tupleSameProduct(self, nums: List[int]) -> int:
        total = 0
        n = len(nums)
        map = {}
        for i in range(n):
            for j in range(i + 1, n):
                t = nums[i] * nums[j]
                r = map.pop(t, 0)
                total += r * 8
                map.setdefault(t, r + 1)
        return total
