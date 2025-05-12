/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int v = 0;

void find(int* f, int c, int n, int* r) {
    if (n == 3) {
        if ((c & 1) == 0)
            r[v++] = c;
        return;
    }
    for (int i = (n == 0 ? 1 : 0); i < 10; i++) {
        if (f[i] > 0) {
            f[i]--;
            find(f, c * 10 + i, n + 1, r);
            f[i]++;
        }
    }
}

int count(int* f, int c, int n) {
    if (n == 3)
        return (c & 1) ^ 1;
    int r = 0;
    for (int i = (n == 0 ? 1 : 0); i < 10; i++) {
        if (f[i] > 0) {
            f[i]--;
            r += count(f, c * 10 + i, n + 1);
            f[i]++;
        }
    }
    return r;
}

int* findEvenNumbers(int* d, int l, int* m) {
    int f[10] = {0};
    for (int i = 0; i < l; i++)
        f[d[i]]++;
    int n = count(f, 0, 0);
    *m = n;
    int* r = (int*)malloc(sizeof(int) * n);
    v = 0;
    find(f, 0, 0, r);
    return r;
}
