class Solution:
    def findKDistantIndices(self, n: List[int], v: int, d: int) -> List[int]:
        k = 0
        s = [i for i in range(len(n)) if n[i] == v]
        i = len(s)
        r = []
        for j in range(len(n)):
            if k == i:
                return r
            if s[k] < j and j - s[k] > d:
                k += 1
            if k < i and abs(j - s[k]) <= d:
                r.append(j)
        return r
