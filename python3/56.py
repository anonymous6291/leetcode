class Solution:
    def merge(self, j: List[List[int]]) -> List[List[int]]:
        k = min([min(x, y) for x, y in j])
        m = max([max(x, y) for x, y in j])
        m -= k - 1
        s = [0] * m
        e = [0] * m
        for i in j:
            s[i[0] - k] += 1
            e[i[1] - k] += 1
        l = []
        p, x = 0, -1
        for i in range(m):
            p += s[i]
            if p > 0 and x == -1:
                x = i
            p -= e[i]
            if p == 0 and x != -1:
                l.append([x + k, i + k])
                x = -1
        return l
