/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

bool validHam(char* i, char* j) {
    int n = strlen(i);
    if (n != strlen(j))
        return false;
    bool f = false;
    for (int k = 0; k < n; k++)
        if (i[k] != j[k]) {
            if (f)
                return false;
            f = true;
        }
    return true;
}

void find(char** a, int* g, int i, int n, char*** l, int* z) {
    if (i == n)
        return;
    char** t = l[i];
    t[z[i]++] = a[i];
    find(a, g, i + 1, n, l, z);
    int p = -1;
    for (int k = i + 1; k < n; k++)
        if (g[i] != g[k] && validHam(a[i], a[k]) && (p == -1 || z[p] < z[k]))
            p = k;
    if (p != -1) {
        int u = z[p];
        for (int k = 0; k < u; k++)
            t[z[i]++] = l[p][k];
    }
}

char** getWordsInLongestSubsequence(char** w, int m, int* g, int n, int* o) {
    char*** d = (char***)malloc(sizeof(char**) * n);
    int* z = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        d[i] = (char**)malloc(sizeof(char*) * n);
        z[i] = 0;
    }
    find(w, g, 0, n, d, z);
    int t = 0;
    for (int i = 1; i < n; i++)
        if (z[t] < z[i])
            t = i;
    *o = z[t];
    return d[t];
}
