/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* n, int l, int* s) {
    *s = l;
    int o = -1, p = 1;
    int* r = (int*)malloc(sizeof(int) * l);
    for (int i = 0; i < l; i++)
        r[i] = 0;
    for (int i = 0; i < l; i++)
        if (n[i] == 0) {
            if (o != -1)
                return r;
            o = i;
        } else
            p *= n[i];
    if (o != -1) {
        r[o] = p;
        return r;
    }
    for (int i = 0; i < l; i++)
        r[i] = p / n[i];
    return r;
}
