int minOperations(int* n, int l, int k) {
    int s = 0;
    for (int i = 0; i < l; i++)
        s += n[i];
    return s % k;
}
