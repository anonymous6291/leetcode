class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        sac = 0
        count = 0
        for i in nums:
            if i == 0:
                count += 1
                sac += count
            else:
                count = 0
        return sac
