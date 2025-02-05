class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        s = 0
        n = len(s1)
        while s < n and s1[s] == s2[s]:
            s += 1
        if s == n:
            return True
        e = n - 1
        while s1[e] == s2[e]:
            e -= 1
        if s1[s] != s2[e] or s1[e] != s2[s]:
            return False
        s += 1
        while s < e:
            if s1[s] != s2[s]:
                return False
            s += 1
        return True
