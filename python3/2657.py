class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        p = 0
        C = []
        F = [False] * 51
        for i in range(len(A)):
            if F[A[i]]:
                p += 1
            else:
                F[A[i]] = True
            if F[B[i]]:
                p += 1
            else:
                F[B[i]] = True
            C.append(p)
        return C
