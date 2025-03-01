class Solution:
    def calculateScore(self, s: str) -> int:
        stack = [[] for _ in range(26)]
        sum = 0
        for i in range(len(s)):
            t = ord(s[i]) - 97
            if len(stack[25 - t]) == 0:
                stack[t].append(i)
            else:
                sum += i - stack[25 - t].pop()
        return sum
