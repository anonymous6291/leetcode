class Solution:
    def repeatLimitedString(self, s: str, rl: int) -> str:
        f = [0] * 26
        for c in s:
            f[ord(c) - 97] += 1
        res = []
        i = 0
        j = 25
        p = -1
        while j >= 0:
            if f[j] == 0:
                j -= 1
            else:
                if p == j:
                    t = j - 1
                    while t >= 0 and f[t] == 0:
                        t -= 1
                    if t == -1:
                        return "".join(res)
                    f[t] -= 1
                    res.append(chr(t + 97))
                    i += 1
                n = min(f[j], rl)
                f[j] -= n
                while n > 0:
                    res.append(chr(j + 97))
                    n -= 1
                    i += 1
                p = j
        return "".join(res)
