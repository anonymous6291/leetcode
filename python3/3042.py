class Solution:
    def countPrefixSuffixPairs(self, w: List[str]) -> int:
        def isPAS(w1, w2):
            return w2.startswith(w1) and w2.endswith(w1)

        count = 0
        n = len(w)
        for i in range(n):
            for j in range(i):
                if isPAS(w[j], w[i]):
                    count += 1
        return count
