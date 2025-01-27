int findLucky(int* arr, int n) {
    int f[501] = {0};
    for (int i = 0; i < n; i++)
        ++f[arr[i]];
    for (int i = 500; i >= 1; i--)
        if (i == f[i])
            return i;
    return -1;
}
