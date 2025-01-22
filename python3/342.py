class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n <= 0:
            return False
        z = 0
        while n > 0:
            if (n & 1) == 1:
                if n != 1:
                    return False
                return (z % 2) == 0
            z += 1
            n >>= 1
        return (z % 2) == 0
