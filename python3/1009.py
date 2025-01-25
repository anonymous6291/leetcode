class Solution:
    def bitwiseComplement(self, n: int) -> int:
        if n == 0:
            return 1
        res = 0
        l = 1
        while n > 0:
            if (n & 1) == 0:
                res |= l
            n >>= 1
            l <<= 1
        return res
