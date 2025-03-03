class Solution:
    def pivotArray(self, nums: List[int], p: int) -> List[int]:
        s = []
        e = []
        l = []
        for i in nums:
            if i > p:
                l.append(i)
            elif i < p:
                s.append(i)
            else:
                e.append(i)
        return s + e + l
