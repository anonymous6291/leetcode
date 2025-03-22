class Solution:
    def onesMinusZeros(self, grid: List[List[int]]) -> List[List[int]]:
        m = len(grid)
        n = len(grid[0])
        rs = [0] * m
        cs = [0] * n
        for i in range(m):
            for j in range(n):
                rs[i] += grid[i][j]
                cs[j] += grid[i][j]
        for i in range(m):
            for j in range(n):
                grid[i][j] = rs[i] * 2 - m + cs[j] * 2 - n
        return grid
