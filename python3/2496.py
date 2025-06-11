class Solution:
    def maximumValue(self, s: List[str]) -> int:
        def find(s):
            v = 0
            for i in s:
                t = ord(i) - 48
                if t > 9:
                    return len(s)
                v = v * 10 + t
            return v

        return max([find(i) for i in s])
