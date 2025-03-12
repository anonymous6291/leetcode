class Solution:
    def findCircleNum(self, ic: List[List[int]]) -> int:
        def ma(ic, i, n, trav):
            if trav[i]:
                return
            trav[i] = True
            for j in range(n):
                if ic[i][j] == 1:
                    ma(ic, j, n, trav)

        n = len(ic)
        prov = 0
        trav = [False] * n
        for i in range(n):
            if not trav[i]:
                ma(ic, i, n, trav)
                prov += 1
        return prov
