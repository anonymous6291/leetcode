class Solution:
    def pushDominoes(self, d: str) -> str:
        c = [i for i in d]
        n = len(c)
        i = 0
        while i < n:
            if c[i] == "L":
                t = i - 1
                i += 1
                while t >= 0 and c[t] == ".":
                    c[t] = "L"
                    t -= 1
            elif c[i] == "R":
                t = i + 1
                while t < n and c[t] == ".":
                    t += 1
                if t == n or c[t] == "R":
                    while i < t:
                        c[i] = "R"
                        i += 1
                    i = t
                elif c[t] == "L":
                    l = i + int((t - i + 1) / 2)
                    k = i
                    while i < l:
                        c[i] = "R"
                        i += 1
                    if ((t - k) % 2) == 0:
                        l += 1
                    while l < t:
                        c[l] = "L"
                        l += 1
                    i = t + 1
                else:
                    i = t
            else:
                i += 1
        return "".join(c)
