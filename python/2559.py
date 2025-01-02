class Solution:
    def vowelStrings(self, w: List[str], q: List[List[int]]) -> List[int]:
        v = set("aeiou")
        psa = [0]
        for j in w:
            psa.append(psa[-1] + (1 if (j[0] in v and j[-1] in v) else 0))
        res = []
        for i, j in q:
            res.append(psa[j + 1] - psa[i])
        return res
