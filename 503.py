class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        s = [0] * 20005
        n = len(nums)
        p = -1000000005
        ind = 10002
        for i in range(n):
            if nums[i] > p:
                s[ind] = p = nums[i]
                ind += 1
        p = 10002
        for i in range(n - 1, -1, -1):
            while p < ind and s[p] <= nums[i]:
                p += 1
            t = nums[i]
            if p == ind:
                nums[i] = -1
            else:
                nums[i] = s[p]
            p -= 1
            s[p] = t
        return nums
