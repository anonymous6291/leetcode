class Solution:
    def interpret(self, c: str) -> str:
        r = []
        j = 0
        n = len(c)
        while j < n:
            if c[j] == "G":
                r.append("G")
                j += 1
            elif c[j + 1] == ")":
                r.append("o")
                j += 2
            else:
                r.append("a")
                r.append("l")
                j += 4
        return "".join(r)
