class Solution:
    def shiftingLetters(self, s: str, sh: List[List[int]]) -> str:
        alpha = "abcdefghijklmnopqrstuvwxyz"
        n1 = len(s)
        ch = [0] * (n1 + 1)
        for i, j, k in sh:
            ch[i] += k * 2 - 1
            ch[j + 1] += 1 - k * 2
        ps = 0
        c = []
        for i in range(n1):
            ps += ch[i]
            c.append(alpha[(alpha.find(s[i]) + ps) % 26])
        return "".join(c)
