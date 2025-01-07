class Solution:
    def stringMatching(self, w: List[str]) -> List[str]:
        def isSub(w, t, i, n):
            for j in range(n):
                if i != j and w[i] in w[j]:
                    return True
            return False

        res = []
        n = len(w)
        for i in range(n):
            if isSub(w, w[i], i, n):
                res.append(w[i])
        return res
