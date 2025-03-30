class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        res = []
        pi = [0] * 26
        for i in range(len(s) - 1, -1, -1):
            t = ord(s[i]) - 97
            if pi[t] == 0:
                pi[t] = i
        pti = 0
        cti = 0
        for i in range(0, len(s)):
            if cti < i:
                res.append(cti - pti + 1)
                pti = i
            t = pi[ord(s[i]) - 97]
            if t > cti:
                cti = t
        res.append(cti - pti + 1)
        return res
