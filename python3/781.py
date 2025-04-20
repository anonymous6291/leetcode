class Solution:
    def numRabbits(self, r: List[int]) -> int:
        c = 0
        f = [0] * 1000
        for i in r:
            if f[i] > 0:
                f[i] -= 1
            else:
                c += i + 1
                f[i] = i
        return c
