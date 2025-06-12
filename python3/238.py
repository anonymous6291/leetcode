class Solution:
    def productExceptSelf(self, n: List[int]) -> List[int]:
        o = -1
        p = 1
        for i in range(len(n)):
            if n[i] == 0:
                if o != -1:
                    return [0] * len(n)
                o = i
            else:
                p *= n[i]
        if o != -1:
            r = [0] * len(n)
            r[o] = p
            return r
        return [int(p / n[i]) for i in range(len(n))]
