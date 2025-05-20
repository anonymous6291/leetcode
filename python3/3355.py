class Solution:
    def isZeroArray(self, n: List[int], q: List[List[int]]) -> bool:
        l = len(n)
        r = [0] * (l + 1)
        p = 0
        for a, b in q:
            r[a] += 1
            r[b + 1] -= 1
        for i in range(l):
            p += r[i]
            if n[i] > p:
                return False
        return True
