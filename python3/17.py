class Solution:
    def __init__(self):
        self.m = [
            ["a", "b", "c"],
            ["d", "e", "f"],
            ["g", "h", "i"],
            ["j", "k", "l"],
            ["m", "n", "o"],
            ["p", "q", "r", "s"],
            ["t", "u", "v"],
            ["w", "x", "y", "z"],
        ]
        self.res = None

    def find(self, d, i, n, p):
        if i == n:
            self.res.append("".join(p))
            return
        for c in self.m["23456789".index(d[i])]:
            p[i] = c
            self.find(d, i + 1, n, p)

    def letterCombinations(self, d: str) -> List[str]:
        n = len(d)
        self.res = []
        if n == 0:
            return self.res
        self.find(d, 0, n, ["0"] * n)
        return self.res
