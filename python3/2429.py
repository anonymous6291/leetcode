class Solution:
    def minimizeXor(self, n1: int, n2: int) -> int:
        def count1(n):
            o = 0
            while n > 0:
                o += n & 1
                n >>= 1
            return o

        t = count1(n2) - count1(n1)
        c = 1
        while t != 0:
            if (n1 & c) == c and t < 0:
                n1 ^= c
                t += 1
            elif (n1 & c) != c and t > 0:
                n1 |= c
                t -= 1
            c <<= 1
        return n1
