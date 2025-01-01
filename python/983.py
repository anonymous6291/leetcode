class Solution:
    def mincostTickets(self, days: List[int], costs: List[int]) -> int:
        def min(i: int, j: int) -> int:
            if i < j:
                return i
            return j

        def find(
            days: List[int], i: int, n: int, td: int, c: List[int], dp: List[int]
        ) -> int:
            if i >= n:
                return 0
            while i < n and days[i] < td:
                i += 1
            if i == n:
                return 0
            if dp[i] != 0:
                return dp[i]
            td = days[i]
            dp[i] = min(
                min(
                    find(days, i + 1, n, td + 1, c, dp) + c[0],
                    find(days, i + 1, n, td + 7, c, dp) + c[1],
                ),
                find(days, i + 1, n, td + 30, c, dp) + c[2],
            )
            return dp[i]

        return find(days, 0, len(days), 0, costs, [0] * len(days))
