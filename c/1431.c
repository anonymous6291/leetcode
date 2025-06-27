/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* c, int n, int e, int* r) {
    *r = n;
    int m = -1;
    for (int i = 0; i < n; i++)
        m = fmax(m, c[i]);
    bool* l = (bool*)malloc(sizeof(bool) * n);
    for (int i = 0; i < n; i++)
        l[i] = (c[i] + e) >= m;
    return l;
}
