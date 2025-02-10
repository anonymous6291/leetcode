class Solution:
    def clearDigits(self, s: str) -> str:
        stack = []
        alpha = "abcdefghijklmnopqrstuvwxyz"
        for c in s:
            if c in alpha:
                stack.append(c)
            else:
                stack.pop()
        return "".join(stack)
