class Solution:
    def minSum(self, n1: List[int], n2: List[int]) -> int:
        s1 = sum(n1)
        s2 = sum(n2)
        z1 = sum([1 if i == 0 else 0 for i in n1])
        z2 = sum([1 if i == 0 else 0 for i in n2])
        s1 += z1
        s2 += z2
        if s1 < s2 and z1 == 0:
            return -1
        if s1 > s2 and z2 == 0:
            return -1
        return max(s1, s2)
