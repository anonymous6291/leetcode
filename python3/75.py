class Solution:
    def sortColors(self, n: List[int]) -> None:
        a = 0
        b = len(n) - 1
        i = 0
        while i <= b:
            if n[i] == 0:
                n[i] = 1
                n[a] = 0
                a += 1
            elif n[i] == 2:
                n[i] = n[b]
                n[b] = 2
                i -= 1
                b -= 1
            i += 1
