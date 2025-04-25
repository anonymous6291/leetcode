class Solution:
    def countCompleteSubarrays(self, n: List[int]) -> int:
        d = 0
        l = len(n)
        c = 0
        t = 0
        p = 0
        f = []
        o = [0] * 2001
        for i in n:
            if not i in f:
                d += 1
                f.append(i)
        for i in range(l):
            if o[n[i]] == 0:
                c += 1
            o[n[i]] += 1
            u = p
            while c >= d:
                o[n[p]] -= 1
                if o[n[p]] == 0:
                    c -= 1
                p += 1
                if c < d:
                    t += (p - u) * (l - i)
                    break
        return t
