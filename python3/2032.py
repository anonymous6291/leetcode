class Solution:
    def twoOutOfThree(self, n1: List[int], n2: List[int], n3: List[int]) -> List[int]:
        f = [0] * 101
        for i in n1:
            f[i] = 1
        for i in n2:
            f[i] = f[i] | 2
        for i in n3:
            f[i] = f[i] | 4
        return [
            i
            for i in range(101)
            if (f[i] != 0 and f[i] != 1 and f[i] != 2 and f[i] != 4)
        ]
