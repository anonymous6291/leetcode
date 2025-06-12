class Solution:
    def numOfSubarrays(self, n: List[int], k: int, t: int) -> int:
        p = 0
        c = 0
        t *= k
        for i in range(k):
            p += n[i]
        if p >= t:
            c += 1
        for i in range(k, len(n)):
            p = p - n[i - k] + n[i]
            if p >= t:
                c += 1
        return c
