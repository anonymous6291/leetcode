/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int abs(int x) { return x < 0 ? -x : x; }

int* findKDistantIndices(int* n, int l, int v, int d, int* x) {
    int i = 0, k = 0, y = 0;
    int* s = (int*)malloc(sizeof(int) * l);
    for (int j = 0; j < l; j++)
        if (n[j] == v)
            s[i++] = j;
    for (int j = 0; j < l; j++) {
        if (k == i)
            break;
        if (s[k] < j && j - s[k] > d)
            k++;
        if (k < i && abs(j - s[k]) <= d)
            y++;
    }
    *x = y;
    int* r = (int*)malloc(sizeof(int) * y);
    k = 0;
    y = 0;
    for (int j = 0; j < l; j++) {
        if (k == i)
            return r;
        if (s[k] < j && j - s[k] > d)
            k++;
        if (k < i && abs(j - s[k]) <= d)
            r[y++] = j;
    }
    return r;
}
