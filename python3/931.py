class Solution:
    def minFallingPathSum(self, mat: List[List[int]]) -> int:
        def find(mat: List[List[int]], i: int, j: int, m: int, dp: List[List[int]]):
            if dp[i][j] != 2000000:
                return dp[i][j]
            if i == m - 1:
                return mat[i][j]
            res = (
                min(
                    find(mat, i + 1, j - 1, m, dp),
                    find(mat, i + 1, j, m, dp),
                    find(mat, i + 1, j + 1, m, dp),
                )
                + mat[i][j]
            )
            dp[i][j] = res
            return res

        m = len(mat)
        dp = [[]] * m
        for i in range(m):
            dp[i] = [2000000] * (m + 1)
            dp[i][m] = 2000001
        minc = find(mat, 0, 0, m, dp)
        for i in range(m):
            minc = min(minc, find(mat, 0, i, m, dp))
        return minc
