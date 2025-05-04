int numEquivDominoPairs(int** d, int n, int* c) {
    int f[10][10] = {0};
    int r = 0;
    for (int i = 0; i < n; i++)
        if (d[i][0] < d[i][1])
            r += f[d[i][0]][d[i][1]]++;
        else
            r += f[d[i][1]][d[i][0]]++;
    return r;
}
