class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        tc = [0] * (n + 1)
        for i in trust:
            tc[i[0]] = -10000
            tc[i[1]] += 1
        judge = -1
        for i in range(1, n + 1):
            if tc[i] == n - 1:
                if judge != -1:
                    return -1
                judge = i
        return judge
