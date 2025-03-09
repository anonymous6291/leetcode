class Solution:
    def numberOfAlternatingGroups(self, colors: List[int], k: int) -> int:
        n = len(colors)
        pi = -1
        count = 0
        l = n + k
        ar = colors + colors[:k]
        for i in range(1, l):
            if ar[i - 1] == ar[i]:
                pi = i - 1
            elif i - k == pi:
                pi = -1
            if i >= k and pi == -1:
                count += 1
        return count
