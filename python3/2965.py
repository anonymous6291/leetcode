class Solution:
    def findMissingAndRepeatedValues(self, g: List[List[int]]) -> List[int]:
        n = len(g)
        rep = -1
        f = [True] * (n * n + 1)
        for i in g:
            for j in i:
                if f[j]:
                    f[j] = False
                else:
                    rep = j
        for i in range(1, n * n + 1):
            if f[i]:
                return [rep, i]
        return None
