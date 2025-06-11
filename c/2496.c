#define max(x, y) ((x > y) ? x : y)

int find(char* s) {
    int n = strlen(s), v = 0;
    for (int i = 0; i < n; i++) {
        int t = s[i] - 48;
        if (t > 9)
            return n;
        v = v * 10 + t;
    }
    return v;
}

int maximumValue(char** s, int n) {
    int m = 0;
    for (int i = 0; i < n; i++)
        m = max(m, find(s[i]));
    return m;
}
