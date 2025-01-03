class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n == 0:
            return 1
        if n == 1:
            return x
        if n == -1:
            return 1.0 / x
        val = self.myPow(x, int(n / 2))
        if n % 2 == 0:
            return val * val
        else:
            if n < 0:
                return (val * val) / x
            else:
                return x * val * val
