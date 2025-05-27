/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoOutOfThree(int* n1, int l1, int* n2, int l2, int* n3, int l3, int* l4) {
    int f[101] = {0};
    for (int i = 0; i < l1; i++)
        f[n1[i]] = 0b1;
    for (int i = 0; i < l2; i++)
        f[n2[i]] = f[n2[i]] | 0b10;
    for (int i = 0; i < l3; i++)
        f[n3[i]] = f[n3[i]] | 0b100;
    int l = 0;
    for (int i = 0; i < 101; i++)
        if (f[i] != 0 && f[i] != 1 && f[i] != 2 && f[i] != 4)
            l++;
    *l4 = l;
    int* r = (int*)malloc(sizeof(int) * l--);
    for (int i = 100; i >= 0; i--)
        if (f[i] != 0 && f[i] != 1 && f[i] != 2 && f[i] != 4)
            r[l--] = i;
    return r;
}
