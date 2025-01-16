class Solution:
    def xorAllNums(self, n1: List[int], n2: List[int]) -> int:
        res = 0
        if len(n1) % 2 != 0:
            for i in n2:
                res ^= i
        if len(n2) % 2 != 0:
            for i in n1:
                res ^= i
        return res
