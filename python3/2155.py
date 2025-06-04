class Solution:
    def maxScoreIndices(self, n: List[int]) -> List[int]:
        l = 0
        r = Counter(n).get(1, 0)
        m = -1
        q = len(n)
        v = []
        for i in range(q):
            if r + l > m:
                m = l + r
                v = []
            if r + l >= m:
                v.append(i)
            l += 1 - n[i]
            r -= n[i]
        if r + l > m:
            return [q]
        if r + l == m:
            return v + [q]
        return v
