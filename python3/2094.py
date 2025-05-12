class Solution:
    def find(self, f, c, n, r):
        if n == 3:
            if (c & 1) == 0:
                r.append(c)
            return
        for i in range(1 if n == 0 else 0, 10):
            if f[i] > 0:
                f[i] -= 1
                self.find(f, c * 10 + i, n + 1, r)
                f[i] += 1

    def findEvenNumbers(self, d: List[int]) -> List[int]:
        f = [0] * 10
        for i in d:
            f[i] += 1
        r = []
        self.find(f, 0, 0, r)
        return r
