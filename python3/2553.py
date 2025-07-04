class Solution:
    def separateDigits(self, n: List[int]) -> List[int]:
        r = []
        for i in n:
            for j in str(i):
                r.append(int(j))
        return r
