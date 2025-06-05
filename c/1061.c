int find(int* c, int i) {
    if (c[i] == i)
        return c[i];
    c[i] = find(c, c[i]);
    return c[i];
}

char* smallestEquivalentString(char* x, char* y, char* b) {
    int n = strlen(x), l = strlen(b);
    int c[26];
    for (int i = 0; i < 26; i++)
        c[i] = i;
    for (int i = 0; i < n; i++) {
        int g = find(c, x[i] - 97), h = find(c, y[i] - 97);
        if (g < h)
            c[h] = g;
        else
            c[g] = h;
    }
    char* r = (char*)malloc(sizeof(char) * (l + 1));
    r[l] = 0;
    for (int i = 0; i < l; i++)
        r[i] = (char)(find(c, b[i] - 97) + 97);
    return r;
}
