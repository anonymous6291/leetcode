class Solution:
    def maxDiff(self, n: int) -> int:
        def ft(d, x, y):
            for i in range(len(d)):
                if d[i] != x and d[i] != y:
                    return i
            return -1

        def rac(d, o, n):
            v = 0
            for i in range(len(d)):
                v = v * 10 + (n if d[i] == o else d[i])
            return v

        l = len(str(n))
        d = [0] * l
        t = n
        for i in range(l - 1, -1, -1):
            d[i] = t % 10
            t = int(t / 10)
        i = ft(d, -1, 9)
        e = n if i == -1 else rac(d, d[i], 9)
        print(e)
        i = ft(d, 0, 1)
        return e - (n if (i == -1) else rac(d, d[i], 1 if i == 0 else 0))
