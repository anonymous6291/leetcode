class Solution:
    def twoSum(self, n: List[int], t: int) -> List[int]:
        s = 0
        e = len(n) - 1
        while s < e:
            y = n[s] + n[e]
            if y == t:
                return [s + 1, e + 1]
            if y < t:
                s += 1
            else:
                e -= 1
        return None
