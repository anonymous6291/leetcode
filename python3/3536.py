class Solution:
    def maxProduct(self, n: int) -> int:
        x, y = -1, -1
        while n > 0:
            t = n % 10
            n = int(n / 10)
            if t >= x:
                y = x
                x = t
            elif t > y:
                y = t
        return x * y
