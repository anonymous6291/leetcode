class Solution:
    def numEquivDominoPairs(self, d: List[List[int]]) -> int:
        f = [[0] * 10 for _ in range(10)]
        r = 0
        for i in d:
            if i[0] < i[1]:
                r += f[i[0]][i[1]]
                f[i[0]][i[1]] += 1
            else:
                r += f[i[1]][i[0]]
                f[i[1]][i[0]] += 1
        return r
