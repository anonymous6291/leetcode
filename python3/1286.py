class CombinationIterator:

    def __init__(self, c: str, l: int):
        self.c = c
        self.n = len(c)
        self.l = l
        self.p = [i for i in range(l)]

    def next(self) -> str:
        w = "".join([self.c[self.p[i]] for i in range(self.l)])
        i = self.l - 1
        while i > 0 and self.p[i] == self.n - (self.l - i):
            i -= 1
        self.p[i] += 1
        i += 1
        while i < self.l:
            self.p[i] = self.p[i - 1] + 1
            i += 1
        return w

    def hasNext(self) -> bool:
        return self.p[0] <= self.n - self.l


# Your CombinationIterator object will be instantiated and called as such:
# obj = CombinationIterator(characters, combinationLength)
# param_1 = obj.next()
# param_2 = obj.hasNext()
