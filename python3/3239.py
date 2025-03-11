class Solution:
    def minFlips(self, grid: List[List[int]]) -> int:
        m = len(grid)
        n = len(grid[0])
        rc = 0
        cc = 0
        for i in grid:
            s = 0
            e = n - 1
            while s < e:
                if i[s] != i[e]:
                    rc += 1
                s += 1
                e -= 1
        for i in range(n):
            s = 0
            e = m - 1
            while s < e:
                if grid[s][i] != grid[e][i]:
                    cc += 1
                s += 1
                e -= 1
        return min(rc, cc)
