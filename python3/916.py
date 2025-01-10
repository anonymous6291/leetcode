class Solution:
    def wordSubsets(self, w1: List[str], w2: List[str]) -> List[str]:
        def check(ar, c):
            for i in range(26):
                if ar[i] < c[i]:
                    return False
            return True

        c = [0] * 26
        for s in w2:
            ar = [0] * 26
            for t in s:
                tt = ord(t) - 97
                ar[tt] += 1
                c[tt] = max(c[tt], ar[tt])
        res = []
        for s in w1:
            ar = [0] * 26
            for t in s:
                ar[ord(t) - 97] += 1
            if check(ar, c):
                res.append(s)
        return res
