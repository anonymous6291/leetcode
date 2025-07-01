class Solution:
    def possibleStringCount(self, w: str) -> int:
        c = len(w)
        for i in range(1, c):
            if w[i] != w[i - 1]:
                c -= 1
        return c
