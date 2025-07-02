int lengthOfLongestSubstring(char* s) {
    int n = strlen(s), p = 0, l = 0;
    int m[128];
    for (int i = 0; i < 128; i++)
        m[i] = -1;
    for (int i = 0; i < n; i++) {
        p = fmax(p, m[s[i]] + 1);
        m[s[i]] = i;
        l = fmax(l, i - p + 1);
    }
    return l;
}
