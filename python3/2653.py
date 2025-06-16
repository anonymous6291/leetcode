class Solution:
    def getSubarrayBeauty(self, n: List[int], k: int, x: int) -> List[int]:
        f = [0] * 101

        def find(x):
            for i in range(50):
                x -= f[i]
                if x < 1:
                    return i - 50
            return 0

        r = []
        for i in range(k):
            f[n[i] + 50] += 1
        r.append(find(x))
        for i in range(k, len(n)):
            f[n[i - k] + 50] -= 1
            f[n[i] + 50] += 1
            r.append(find(x))
        return r
