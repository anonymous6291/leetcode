class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        res = []
        for i in nums:
            res.append(i)
        for i in nums:
            res.append(i)
        return res
