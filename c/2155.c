/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* maxScoreIndices(int* n, int q, int* s) {
    int r = 0, l = 0, m = -1, c = 0;
    for (int i = 0; i < q; i++)
        r += n[i];
    int t = r;
    for (int i = 0; i < q; i++) {
        if (r + l > m) {
            m = l + r;
            c = 1;
        } else if (r + l == m)
            c++;
        l += 1 - n[i];
        r -= n[i];
    }
    if (r + l > m) {
        m = l + r;
        c = 1;
    } else if (r + l == m)
        c++;
    l = 0;
    r = t;
    *s = c;
    int* v = (int*)malloc(sizeof(int) * c);
    c = 0;
    for (int i = 0; i < q; i++) {
        if (l + r == m)
            v[c++] = i;
        l += 1 - n[i];
        r -= n[i];
    }
    if (l + r == m)
        v[c++] = q;
    return v;
}
