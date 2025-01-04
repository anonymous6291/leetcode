class Solution:
    def maximalSquare(self, mat: List[List[str]]) -> int:
        def min(i, j, k):
            if i < j:
                return i if i < k else k
            return j if j < k else k

        res = 0
        m = len(mat)
        n = len(mat[0])
        dp = [[0] * (n + 1) for i in range(m + 1)]
        for i in range(1, m + 1):
            for j in range(1, n + 1):
                if mat[i - 1][j - 1] == "1":
                    dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]) + 1
                    res = dp[i][j] if (dp[i][j] > res) else res
        return res * res
