class Solution:
    def maxVowels(self, c: str, k: int) -> int:
        v = [0] * 26
        v[0] = 1
        v[4] = 1
        v[8] = 1
        v[14] = 1
        v[20] = 1
        vc = 0
        n = len(c)
        for i in range(k):
            vc += v[ord(c[i]) - 97]
        mvc = vc
        for i in range(k, n):
            vc += v[ord(c[i]) - 97] - v[ord(c[i - k]) - 97]
            if vc > mvc:
                mvc = vc
        return mvc
