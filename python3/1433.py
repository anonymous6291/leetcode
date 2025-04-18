class Solution:
    def checkIfCanBreak(self, s1: str, s2: str) -> bool:
        f = [0] * 26
        for i in range(len(s1)):
            f[ord(s1[i]) - 97] += 1
            f[ord(s2[i]) - 97] -= 1
        p1 = 0
        p2 = 0
        f1 = True
        f2 = True
        for i in f:
            p1 += i
            p2 -= i
            if p1 < 0:
                f1 = False
            if p2 < 0:
                f2 = False
        return f1 or f2
