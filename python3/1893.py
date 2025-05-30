class Solution:
    def isCovered(self, j: List[List[int]], l: int, r: int) -> bool:
        f = [0] * 52
        for i in j:
            f[i[0]] += 1
            f[i[1] + 1] -= 1
        p = 0
        for i in range(52):
            p += f[i]
            if i >= l and i <= r and p == 0:
                return False
        return True
