class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        s = 1
        e = 46340
        while s < e:
            m = int((s + e) / 2)
            t = m * m
            if t == num:
                return True
            if t < num:
                s = m + 1
            else:
                e = m - 1
        return s * s == num
