class Solution:
    def minDistance(self, w1: str, w2: str) -> int:
        def find(s1: str, i: int, s2: str, j: int, dp: List[List[int]]):
            if i == len(s1):
                return len(s2) - j
            if j == len(s2):
                return len(s1) - i
            if dp[i][j] != -1:
                return dp[i][j]
            res = -1
            if s1[i] == s2[j]:
                res = find(s1, i + 1, s2, j + 1, dp)
            else:
                res = (
                    min(
                        find(s1, i + 1, s2, j + 1, dp),
                        min(find(s1, i + 1, s2, j, dp), find(s1, i, s2, j + 1, dp)),
                    )
                    + 1
                )
            dp[i][j] = res
            return res

        n1 = len(w1)
        n2 = len(w2)
        dp = [[-1] * n2 for _ in range(n1)]
        return find(w1, 0, w2, 0, dp)
