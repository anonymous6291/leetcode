class Solution:
    def gridGame(self, grid: List[List[int]]) -> int:
        n = len(grid[0])
        rm2 = 11000000000
        ps = sum([i for i in grid[1]])
        ss = 0
        for i in range(n - 1, -1, -1):
            ps -= grid[1][i]
            rm2 = min(rm2, max(ss, ps))
            ss += grid[0][i]
        return rm2
