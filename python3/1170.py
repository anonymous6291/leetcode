class Solution:
    def numSmallerByFrequency(self, q: List[str], w: List[str]) -> List[int]:
        def f(s):
            freq = [0] * 26
            for i in s:
                freq[ord(i) - 97] += 1
            for j in freq:
                if j:
                    return j
            return 0

        freq = [0] * 12
        for i in w:
            for j in range(0, f(i) + 1):
                freq[j] += 1
        return [freq[f(i) + 1] for i in q]
