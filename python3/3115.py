class Solution:
    def maximumPrimeDifference(self, nums: List[int]) -> int:
        def prime(n):
            if n == 1:
                return False
            for i in range(2, int(sqrt(n)) + 1):
                if n % i == 0:
                    return False
            return True

        s = 0
        e = len(nums) - 1
        while s <= e:
            if prime(nums[s]):
                break
            s += 1
        while s <= e:
            if prime(nums[e]):
                return e - s
            e -= 1
        return 0
