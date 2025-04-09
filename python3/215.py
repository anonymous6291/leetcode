class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        f = [0] * 20001
        for i in nums:
            f[i + 10000] += 1
        for i in range(20000, -1, -1):
            k -= f[i]
            if k <= 0:
                return i - 10000
        return 0
