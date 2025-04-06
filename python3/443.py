class Solution:
    def compress(self, c: List[str]) -> int:
        num = "0123456789"

        def len1(i):
            l = 0
            while i > 0:
                l += 1
                i = int(i / 10)
            return l

        n = len(c)
        j = 0
        f = 0
        t = c[0]
        for i in range(n):
            if c[i] != t:
                c[j] = t
                j += 1
                if f != 1:
                    l1 = len1(f)
                    l2 = l1
                    while f > 0:
                        l1 -= 1
                        c[j + l1] = num[(f % 10)]
                        f = int(f / 10)
                    j += l2
                t = c[i]
                f = 1
            else:
                f += 1
        c[j] = t
        j += 1
        if f != 1:
            l1 = len1(f)
            l2 = l1
            while f > 0:
                l1 -= 1
                c[j + l1] = num[(f % 10)]
                f = int(f / 10)
            j += l2
        return j
