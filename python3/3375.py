class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        f = set()
        for i in nums:
            if i < k:
                return -1
            elif i != k:
                f.add(i)
        return len(f)
