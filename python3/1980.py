class Solution:
    def findDifferentBinaryString(self, nums: List[str]) -> str:
        n = len(nums)
        res = []
        for i in range(n):
            res.append("0" if (nums[i][i] == "1") else "1")
        return "".join(res)
