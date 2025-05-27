class Solution:
    def canPlaceFlowers(self, f: List[int], n: int) -> bool:
        l = len(f)
        i = f[0] * 2
        while i < l and n > 0:
            if f[i] == 0 and (i == l - 1 or f[i + 1] == 0):
                n -= 1
                i += 1
            elif f[i] == 1:
                i += 1
            i += 1
        return n == 0
