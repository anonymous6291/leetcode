class Solution:
    def f(self, i):
        v = 1
        while 2 * v < i:
            v *= 2
        return v

    def kthCharacter(self, k: int) -> str:
        if k == 1:
            return "a"
        return chr(ord(self.kthCharacter(k - self.f(k))) + 1)
