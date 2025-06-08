class Solution:
    def isAlienSorted(self, w: List[str], o: str) -> bool:
        c = [0] * 26
        for i in range(26):
            c[ord(o[i]) - 97] = i
        s1 = w[0]
        n = len(w)
        n1 = len(s1)
        for i in range(n):
            s2 = w[i]
            n2 = len(s2)
            j = 0
            while j < n1 and j < n2 and s1[j] == s2[j]:
                j += 1
            if j != n1 and j == n2:
                return False
            while j < n1:
                if j == n2 or c[ord(s1[j]) - 97] > c[ord(s2[j]) - 97]:
                    return False
                elif s1[j] != s2[j]:
                    break
                j += 1
            n1 = n2
            s1 = s2
        return True
