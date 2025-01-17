bool doesValidArrayExist(int* d, int n) {
    int res = 0;
    for (int i = 0; i < n; i++)
        res ^= d[i];
    return res == 0;
}
