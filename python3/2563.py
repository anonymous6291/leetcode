class Solution:
    def find(self, nums, b):
        r = 0
        s = 0
        e = len(nums) - 1
        while s < e:
            if (nums[s] + nums[e]) <= b:
                r += e - s
                s += 1
            else:
                e -= 1
        return r

    def countFairPairs(self, nums: List[int], lower: int, upper: int) -> int:
        nums.sort()
        return self.find(nums, upper) - self.find(nums, lower - 1)
