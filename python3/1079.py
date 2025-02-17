class Solution:
    def numTilePossibilities(self, tiles: str) -> int:
        def count(c, trav, n):
            cc = 0
            i = 0
            while i < n:
                if not trav[i]:
                    trav[i] = True
                    cc += count(c, trav, n) + 1
                    trav[i] = False
                    t = i
                    while i < n and c[t] == c[i]:
                        i += 1
                else:
                    i += 1
            return cc

        c = [i for i in tiles]
        c.sort()
        return count(c, [False] * len(tiles), len(tiles))
