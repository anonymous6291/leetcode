int min(int i, int j) { return (i < j) ? i : j; }

int find(int** tri, int i, int j, int n, int* mins) {
    if (i == n)
        return tri[i][j];
    int m1 = (j != 0) ? (mins[i + 1]) : (find(tri, i + 1, j, n, mins));
    int m2 = find(tri, i + 1, j + 1, n, mins);
    mins[i + 1] = m2;
    return min(m1, m2) + tri[i][j];
}

int minimumTotal(int** tri, int n, int* tcs) {
    return find(tri, 0, 0, n - 1, (int*)malloc(sizeof(int) * n));
}
