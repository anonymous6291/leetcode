class Solution:
    def partitionString(self, s: str) -> int:
        c = 1
        f = 0
        for i in s:
            x = 1 << (ord(i) - 97)
            if f & x:
                f = 0
                c += 1
            f |= x
        return c
