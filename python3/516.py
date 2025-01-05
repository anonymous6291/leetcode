class Solution:
    def longestPalindromeSubseq(self, s: str) -> int:
        def find(c, s, e, dp):
            if s > e:
                return 0
            if s == e:
                return 1
            if dp[s][e] != -1:
                return dp[s][e]
            res = 0
            if c[s] == c[e]:
                res = find(c, s + 1, e - 1, dp) + 2
            else:
                res = max(find(c, s + 1, e, dp), find(c, s, e - 1, dp))
            dp[s][e] = res
            return res

        n = len(s)
        dp = [[-1] * n for _ in range(n)]
        return find(s, 0, n - 1, dp)
