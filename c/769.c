int maxnum(int i, int j) { return (i > j) ? i : j; }
int allTrue(int* f, int s, int e) {
    while (s <= e) {
        if (!f[s])
            return 0;
        ++s;
    }
    return 1;
}
int find(int* arr, int i, int n, int s, int* f) {
    if (i == n)
        return 0;
    int max = s;
    while (i < n) {
        f[arr[i]] = 1;
        max = maxnum(max, arr[i]);
        if (allTrue(f, s, max))
            return 1 + find(arr, i + 1, n, max + 1, f);
        ++i;
    }
    return 1;
}
int maxChunksToSorted(int* arr, int n) {
    int f[n];
    for (int i = 0; i < n; i++)
        f[i] = 0;
    return find(arr, 0, n, 0, f);
}
