class Solution:
    def replaceDigits(self, s: str) -> str:
        n = len(s)
        r = []
        x = "abcdefghijklmnopqrstuvwxyz"
        for i in range(0, n, 2):
            r.append(s[i])
            if i + 1 < n:
                r.append(x[ord(s[i]) + ord(s[i + 1]) - 145])
        return "".join(r)
