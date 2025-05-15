/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** getLongestSubsequence(char** w, int x, int* g, int n, int* y) {
    int l = 1, k = 1;
    for (int i = 1; i < n; i++)
        if (g[i - 1] != g[i])
            l++;
    *y = l;
    char** r = (char**)malloc(sizeof(char*) * l);
    r[0] = w[0];
    for (int i = 1; i < n; i++)
        if (g[i - 1] != g[i])
            r[k++] = w[i];
    return r;
}
