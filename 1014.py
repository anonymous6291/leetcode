class Solution:
    def maxScoreSightseeingPair(self, val: List[int]) -> int:
        p = 0
        max = -1
        for i in range(1, len(val)):
            t = val[p] + val[i] + p - i
            if t > max:
                max = t
            if 2 * val[i] >= t:
                p = i
        return max
