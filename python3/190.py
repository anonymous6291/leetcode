class Solution:
    def reverseBits(self, n: int) -> int:
        i = 0
        res = 0
        while i <= 31:
            res = (res << 1) | (n & 1)
            n >>= 1
            i += 1
        return res
