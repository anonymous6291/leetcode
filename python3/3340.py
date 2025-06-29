class Solution:
    def isBalanced(self, n: str) -> bool:
        l = len(n)
        b = 0
        for i in range(0, l, 2):
            b += ord(n[i]) - 48
        for i in range(1, l, 2):
            b -= ord(n[i]) - 48
        return b == 0
