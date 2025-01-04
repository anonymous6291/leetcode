class Solution:
    def countPalindromicSubsequence(self, st: str) -> int:
        def find(c, s, n):
            e = n - 1
            while e > s + 1 and c[e] != c[s]:
                e -= 1
            if s + 1 == e:
                return 0
            un = [0] * 26
            for i in range(s + 1, e):
                un[c[i]] = 1
            return sum(un)

        count = 0
        s = 0
        n = len(st)
        c = [(ord(i) - 97) for i in st]
        f = [False] * 26
        while s < n - 2:
            f[c[s]] = True
            count += find(c, s, n)
            while s < n - 2 and f[c[s]]:
                s += 1
        return count
