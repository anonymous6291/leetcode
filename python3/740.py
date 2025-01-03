class Solution:
    def deleteAndEarn(self, nums: List[int]) -> int:
        m = 0
        for i in nums:
            m = max(m, i)
        m += 1
        f = [0] * m
        for i in nums:
            f[i] += 1
        dp = [0] * m
        dp[m - 1] = f[m - 1] * (m - 1)
        dp[m - 2] = max(f[m - 2] * (m - 2), dp[m - 1])
        for i in range(m - 3, 0, -1):
            dp[i] = max(f[i] * i + dp[i + 2], dp[i + 1])
        return dp[1]
