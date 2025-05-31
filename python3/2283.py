class Solution:
    def digitCount(self, n: str) -> bool:
        f = [0] * 10
        for i in n:
            f[ord(i) - 48] += 1
        for i in range(len(n)):
            if f[i] != ord(n[i]) - 48:
                return False
        return True
