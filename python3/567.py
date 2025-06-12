class Solution:
    def checkInclusion(self, x: str, y: str) -> bool:
        l = len(x)
        m = len(y)
        if l > m:
            return False
        i = [0] * 26
        j = [0] * 26

        def permutation():
            for x, y in zip(i, j):
                if x != y:
                    return False
            return True

        for k in range(l):
            i[ord(x[k]) - 97] += 1
            j[ord(y[k]) - 97] += 1
        if permutation():
            return True
        for k in range(l, m):
            j[ord(y[k - l]) - 97] -= 1
            j[ord(y[k]) - 97] += 1
            if permutation():
                return True
        return False
