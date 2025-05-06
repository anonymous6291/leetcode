/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* n, int l, int* h) {
    *h = l;
    int* r = (int*)malloc(sizeof(int) * l);
    for (int i = 0; i < l; i++)
        r[i] = n[n[i]];
    return r;
}
