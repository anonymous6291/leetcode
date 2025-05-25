class Solution {
public:
    int longestPalindrome(vector<string>& w) {
        int l = 0, f[26][26] = {0};
        for (auto& s : w) {
            int x = s[0] - 97, y = s[1] - 97;
            if (f[y][x] > 0) {
                l += 4;
                f[y][x]--;
            } else
                f[x][y]++;
        }
        for (int i = 0; i < 26; i++)
            if (f[i][i] > 0)
                return l + 2;
        return l;
    }
};
