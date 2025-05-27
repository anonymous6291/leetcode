class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        q = int(n / m)
        return int((((n + 1) * n) / 2) - (1 + q) * m * q)
