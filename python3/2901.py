class Solution:
    def validHam(self, i, j):
        if len(i) != len(j):
            return False
        f = False
        for k in range(0, len(i)):
            if i[k] != j[k]:
                if f:
                    return False
                f = True
        return True

    def find(self, a, g, i, n, l):
        if i == n:
            return
        self.find(a, g, i + 1, n, l)
        p = []
        for k in range(i + 1, n):
            if g[i] != g[k] and self.validHam(a[i], a[k]) and len(p) < len(l[k]):
                p = l[k]
        l[i] = [a[i]] + p

    def getWordsInLongestSubsequence(self, w: List[str], g: List[int]) -> List[str]:
        d = [[] for _ in range(len(w))]
        self.find(w, g, 0, len(w), d)
        t = d[0]
        for i in d:
            if len(t) < len(i):
                t = i
        return t
