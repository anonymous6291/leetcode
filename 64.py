class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        def find(
            g: List[List[int]], i: int, j: int, m: int, n: int, dp: List[List[int]]
        ) -> int:
            if i == m or j == n:
                return 8000000
            if i == m - 1 and j == n - 1:
                return g[i][j]
            if dp[i][j] != -1:
                return dp[i][j]
            dp[i][j] = (
                min(find(g, i + 1, j, m, n, dp), find(g, i, j + 1, m, n, dp)) + g[i][j]
            )
            return dp[i][j]

        m = len(grid)
        n = len(grid[0])
        dp = [[]] * m
        for i in range(m):
            dp[i] = [-1] * n
        return find(grid, 0, 0, m, n, dp)
