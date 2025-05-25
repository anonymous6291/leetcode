class Solution:
    def longestPalindrome(self, w: List[str]) -> int:
        l = 0
        f = [[0] * 26 for _ in range(26)]
        for s in w:
            x = ord(s[0]) - 97
            y = ord(s[1]) - 97
            if f[y][x] > 0:
                l += 4
                f[y][x] -= 1
            else:
                f[x][y] += 1
        for i in range(26):
            if f[i][i] > 0:
                return l + 2
        return l
