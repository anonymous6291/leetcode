class Solution:
    def uniquePathsWithObstacles(self, g: List[List[int]]) -> int:
        def find(
            g: List[List[int]], i: int, j: int, m: int, n: int, dp: List[List[int]]
        ) -> int:
            if g[i][j] == 1:
                return 0
            if i == m - 1 and j == n - 1:
                return 1
            if dp[i][j] != -1:
                return dp[i][j]
            if i + 1 < m:
                dp[i][j] = find(g, i + 1, j, m, n, dp)
            else:
                dp[i][j] = 0
            if j + 1 < n:
                dp[i][j] += find(g, i, j + 1, m, n, dp)
            return dp[i][j]

        m = len(g)
        n = len(g[0])
        dp = [[]] * m
        for i in range(m):
            dp[i] = [-1] * n
        return find(g, 0, 0, m, n, dp)
