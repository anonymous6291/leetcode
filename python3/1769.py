class Solution:
    def minOperations(self, b: str) -> List[int]:
        n = len(b)
        ps = 0
        ss = 0
        pbc = 0
        sbc = 0
        for i in range(n - 1, -1, -1):
            ss += sbc
            if b[i] == "1":
                sbc += 1
        res = []
        for i in range(n):
            res.append(ss + ps)
            if b[i] == "1":
                sbc -= 1
                pbc += 1
            ss -= sbc
            ps += pbc
        return res
