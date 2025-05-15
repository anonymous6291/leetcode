class Solution:
    def getLongestSubsequence(self, w: List[str], g: List[int]) -> List[str]:
        return [w[0]] + [w[i] for i in range(1, len(w)) if (g[i - 1] != g[i])]
