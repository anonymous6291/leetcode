class Solution:
    def trap(self, h: List[int]) -> int:
        n = len(h)
        tw = 0
        j = -1
        st = [0] * n
        for i in range(n):
            while j > 0 and h[st[j]] < h[i]:
                if h[st[j - 1]] >= h[st[j]]:
                    tw += (min(h[st[0]], h[i]) - h[st[j]]) * (st[j] - st[j - 1])
                j -= 1
            if j != -1 and h[st[j]] <= h[i]:
                st[j] = i
            else:
                j += 1
                st[j] = i
        return tw
