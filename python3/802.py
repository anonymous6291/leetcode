class Solution:
    def eventualSafeNodes(self, g: List[List[int]]) -> List[int]:
        def find(g, i, pter, trav):
            if trav[i]:
                return pter[i]
            trav[i] = True
            for j in g[i]:
                if not find(g, j, pter, trav):
                    return False
            pter[i] = True
            return True

        n = len(g)
        pter = [False] * n
        trav = [False] * n
        res = []
        for i in range(n):
            if find(g, i, pter, trav):
                res.append(i)
        return res
