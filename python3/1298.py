class Solution:
    def maxCandies(
        self,
        s: List[int],
        c: List[int],
        k: List[List[int]],
        b: List[List[int]],
        i: List[int],
    ) -> int:
        n = len(s)
        p = [False] * n
        v = [False] * n

        def traverse(j: int) -> int:
            if s[j] == 0:
                p[j] = True
                return 0
            if v[j]:
                return 0
            v[j] = True
            r = c[j]
            for m in k[j]:
                s[m] = 1
                if p[m]:
                    r += traverse(m)
            for m in b[j]:
                r += traverse(m)
            return r

        r = 0
        for j in i:
            r += traverse(j)
        return r
