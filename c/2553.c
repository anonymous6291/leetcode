/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* separateDigits(int* n, int l, int* u) {
    int p = 0;
    for (int j = 0; j < l; j++) {
        int i = n[j];
        while (i > 0) {
            p++;
            i /= 10;
        }
    }
    *u = p;
    int* r = (int*)malloc(sizeof(int) * p);
    p = 0;
    for (int j = 0; j < l; j++) {
        int i = n[j], s = 1, t = i / 10;
        while (t > 0) {
            s *= 10;
            t /= 10;
        }
        while (s > 0) {
            r[p++] = i / s;
            i %= s;
            s /= 10;
        }
    }
    return r;
}
