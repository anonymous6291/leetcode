class Solution:
    def minimumOperations(self, n: List[int]) -> int:
        f = [False] * 101
        c = 0
        for i in n:
            if i != 0 and not f[i]:
                f[i] = True
                c += 1
        return c
