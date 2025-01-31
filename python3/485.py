class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        m = 0
        c = 0
        for i in nums + [0]:
            if i == 1:
                c += 1
            else:
                if m < c:
                    m = c
                c = 0
        return m
