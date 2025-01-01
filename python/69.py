class Solution:
    def mySqrt(self, x: int) -> int:
        s = 0
        e = 46340
        while s < e:
            m = (s + e) >> 1
            t = m * m
            if t == x:
                return m
            if t < x:
                s = m + 1
            else:
                e = m - 1
        if s * s > x:
            return s - 1
        return s
