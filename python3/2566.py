class Solution:
    def minMaxDifference(self, n: int) -> int:
        t = n
        l = int(log(n, 10)) + 1
        d = [0] * l
        t = n
        s = 0
        e = 0
        y = -1
        for i in range(l - 1, -1, -1):
            d[i] = t % 10
            if d[i] != 9:
                y = d[i]
            t = int(t / 10)
        x = d[0]
        for i in range(l):
            if x == d[i]:
                s *= 10
            else:
                s = s * 10 + d[i]
            if y == d[i]:
                e = e * 10 + 9
            else:
                e = e * 10 + d[i]
        return e - s
