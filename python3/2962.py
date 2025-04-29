class Solution:
    def countSubarrays(self, n: List[int], k: int) -> int:
        p = 0
        c = 0
        l = len(n)
        m = max(n)
        t = 0
        for i in range(l):
            if m == n[i]:
                c += 1
            if c == k:
                x = p
                while c == k:
                    if m == n[p]:
                        c -= 1
                    p += 1
                t += (p - x) * (l - i)
        return t
