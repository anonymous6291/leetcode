class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        def find(i: int, j: int, m: int, n: int, dp: List[List[int]]) -> int:
            if i == m - 1 and j == n - 1:
                return 1
            if i == m or j == n:
                return 0
            if dp[i][j] != 0:
                return dp[i][j]
            dp[i][j] = find(i + 1, j, m, n, dp) + find(i, j + 1, m, n, dp)
            return dp[i][j]

        dp = [[]] * m
        for i in range(m):
            dp[i] = [0] * n
        return find(0, 0, m, n, dp)
