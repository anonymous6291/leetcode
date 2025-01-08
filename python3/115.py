class Solution:
    def numDistinct(self, s: str, t: str) -> int:
        def find(c, s, i, j, n1, n2, dp):
            if j == n2:
                return 1
            if i == n1 or n1 - i < n2 - j:
                return 0
            if dp[i][j] != -1:
                return dp[i][j]
            res = find(c, s, i + 1, j, n1, n2, dp)
            if c[i] == s[j]:
                res += find(c, s, i + 1, j + 1, n1, n2, dp)
            dp[i][j] = res
            return res

        n1 = len(s)
        n2 = len(t)
        if n1 < n2:
            return 0
        dp = [[-1] * n2 for _ in range(n1)]
        return find(s, t, 0, 0, n1, n2, dp)
