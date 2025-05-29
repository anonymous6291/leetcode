class Solution:
    def convertToTitle(self, c: int) -> str:
        x = "ZABCDEFGHIJKLMNOPQRSTUVWXY"
        s = []
        while c > 0:
            s.append(x[c % 26])
            c = int((c - 1) / 26)
        return "".join(s[::-1])
