int numberOfAlternatingGroups(int* colors, int n, int k) {
    int l = n + k, pi = -1, count = 0;
    int* ar = (int*)malloc(sizeof(int) * l);
    for (int i = 0; i < n; i++) {
        ar[i] = colors[i];
        if (i < k)
            ar[i + n] = colors[i];
    }
    for (int i = 1; i < l; i++) {
        if (ar[i - 1] == ar[i])
            pi = i - 1;
        else if (i - k == pi)
            pi = -1;
        if (i >= k && pi == -1)
            count++;
    }
    return count;
}
