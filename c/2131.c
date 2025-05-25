int longestPalindrome(char** w, int n) {
    int l = 0, f[26][26] = {0};
    for (int i = 0; i < n; i++) {
        int x = w[i][0] - 97, y = w[i][1] - 97;
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
