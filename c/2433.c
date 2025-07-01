/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findArray(int* p, int l, int* r) {
    *r = l;
    for (int i = l - 1; i > 0; i--)
        p[i] ^= p[i - 1];
    return p;
}
