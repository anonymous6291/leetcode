class Solution:
    def minimumLength(self, s: str) -> int:
        count = 0
        for i in "abcdefghijklmnopqrstuvwxyz":
            c = s.count(i)
            if (c & 1) == 1:
                count += 1
            elif c != 0:
                count += 2
        return count
