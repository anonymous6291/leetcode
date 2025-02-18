class Solution:
    def smallestNumber(self, p: str) -> str:
        def find(res, p, trav, s, i, n):
            res[i] = chr(s + 48)
            if i == n:
                return True
            while True:
                s = s + (1 if (p[i] == "I") else -1)
                if s < 1 or s > 9:
                    return False
                if not trav[s]:
                    trav[s] = True
                    if find(res, p, trav, s, i + 1, n):
                        return True
                    trav[s] = False

        n = len(p)
        res = ["0"] * (n + 1)
        trav = [False] * 10
        for i in range(1, 10):
            trav[i] = True
            if find(res, p, trav, i, 0, n):
                return "".join(res)
            trav[i] = False
        return ""
