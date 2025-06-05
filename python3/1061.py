class Solution:
    def smallestEquivalentString(self, x: str, y: str, b: str) -> str:
        c = [_ for _ in range(26)]
        k = "abcdefghijklmnopqrstuvwxyz"

        def find(i) -> int:
            if c[i] == i:
                return c[i]
            c[i] = find(c[i])
            return c[i]

        for i in range(len(x)):
            g = find(ord(x[i]) - 97)
            h = find(ord(y[i]) - 97)
            if g < h:
                c[h] = g
            else:
                c[g] = h
        return "".join([k[find(ord(i) - 97)] for i in b])
