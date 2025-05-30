bool isCovered(int** j, int x, int* y, int l, int r) {
    int f[52] = {0};
    for (int i = 0; i < x; i++) {
        f[j[i][0]]++;
        f[j[i][1] + 1]--;
    }
    int p = 0;
    for (int i = 0; i <= 51; i++) {
        p += f[i];
        if (i >= l && i <= r && p == 0)
            return false;
    }
    return true;
}
