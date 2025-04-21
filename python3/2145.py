class Solution:
    def numberOfArrays(self, d: List[int], l: int, u: int) -> int:
        c = l
        r = [l]
        for i in d:
            c += i
            r.append(c)
        return max(0, min(r) - l + u - max(r) + 1)
