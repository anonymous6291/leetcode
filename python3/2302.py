class Solution:
    def countSubarrays(self, n: List[int], k: int) -> int:
        c = 0
        s = 0
        p = -1
        for i in range(len(n)):
            s += n[i]
            while (s * (i - p)) >= k:
                p += 1
                s -= n[p]
            c += i - p
        return c
