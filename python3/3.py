class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        p = 0
        l = 0
        m = [-1] * 128
        for i in range(len(s)):
            p = max(p, m[ord(s[i])] + 1)
            m[ord(s[i])] = i
            l = max(l, i - p + 1)
        return l
