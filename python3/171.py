class Solution:
    def titleToNumber(self, c: str) -> int:
        s = 0
        m = 1
        for i in c[::-1]:
            s += m * (ord(i) - 64)
            m *= 26
        return s
