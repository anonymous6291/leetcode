class Solution:
    def numberOfPoints(self, n: List[List[int]]) -> int:
        c = [0] * 102
        for l in n:
            c[l[0]] += 1
            c[l[1] + 1] -= 1
        p = 0
        s = 0
        for i in c:
            s += i
            if s != 0:
                p += 1
        return p
