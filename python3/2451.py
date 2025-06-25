class Solution:
    def make(self, s, d):
        for i in range(len(s) - 1):
            d[i] = ord(s[i]) - ord(s[i + 1])

    def oddString(self, w: List[str]) -> str:
        n = len(w[0]) - 1
        d1 = [0] * n
        d2 = [0] * n
        self.make(w[0], d1)
        self.make(w[1], d2)
        if d1 != d2:
            d3 = [0] * n
            self.make(w[2], d3)
            return w[1 if d1 == d3 else 0]
        for i in w:
            self.make(i, d2)
            if d1 != d2:
                return i
        return ""
