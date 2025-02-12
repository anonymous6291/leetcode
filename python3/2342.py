class Solution:
    def maximumSum(self, nums: List[int]) -> int:
        m1 = [0] * 82
        m2 = [0] * 82
        ms = -1
        for i in nums:
            s = 0
            t = i
            while t > 0:
                s += t % 10
                t = int(t / 10)
            if m1[s] < i:
                m2[s] = m1[s]
                m1[s] = i
            elif m2[s] < i:
                m2[s] = i
            if m2[s] != 0:
                ms = max(ms, m1[s] + m2[s])
        return ms
