int min(int i, int j) { return (i < j) ? i : j; }
char* repeatLimitedString(char* s, int rl) {
    int f[26] = {0};
    int n = strlen(s);
    for (int i = 0; i < n; i++)
        ++f[s[i] - 'a'];
    char* res = (char*)malloc(sizeof(char) * (n + 1));
    int i = 0, j = 25, p = -1;
    while (j >= 0) {
        if (f[j] == 0)
            --j;
        else {
            if (p == j) {
                int t = j - 1;
                while (t >= 0 && f[t] == 0)
                    --t;
                if (t == -1) {
                    res[i] = '\0';
                    return res;
                }
                --f[t];
                res[i++] = (char)('a' + t);
            }
            int n = min(f[j], rl);
            f[j] -= n;
            while (--n >= 0)
                res[i++] = (char)('a' + j);
            p = j;
        }
    }
    res[i] = '\0';
    return res;
}
