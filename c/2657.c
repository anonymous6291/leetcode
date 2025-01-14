/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findThePrefixCommonArray(int* A, int n, int* B, int bs, int* rs) {
    *rs = n;
    int p = 0;
    int* C = (int*)malloc(sizeof(int) * n);
    bool F[51] = {false};
    for (int i = 0; i < n; i++) {
        if (F[A[i]])
            ++p;
        else
            F[A[i]] = true;
        if (F[B[i]])
            ++p;
        else
            F[B[i]] = true;
        C[i] = p;
    }
    return C;
}
