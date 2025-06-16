/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int find(int* f, int x) {
    for (int i = 0; i < 50; i++) {
        x -= f[i];
        if (x < 1)
            return i - 50;
    }
    return 0;
}

int* getSubarrayBeauty(int* n, int l, int k, int x, int* y) {
    int f[101] = {0};
    *y = l - k + 1;
    int* r = (int*)malloc(sizeof(int) * (l - k + 1));
    for (int i = 0; i < k; i++)
        f[n[i] + 50]++;
    r[0] = find(f, x);
    for (int i = k; i < l; i++) {
        f[n[i - k] + 50]--;
        f[n[i] + 50]++;
        r[i - k + 1] = find(f, x);
    }
    return r;
}
