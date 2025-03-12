int findJudge(int n, int** trust, int ts, int* trustColSize) {
    int* tc = (int*)malloc(sizeof(int) * (n + 1));
    for (int i = 0; i <= n; i++)
        tc[i] = 0;
    for (int i = 0; i < ts; i++) {
        tc[trust[i][0]] = -10000;
        tc[trust[i][1]]++;
    }
    int judge = -1;
    for (int i = n; i > 0; i--)
        if (tc[i] == n - 1) {
            if (judge != -1)
                return -1;
            judge = i;
        }
    return judge;
}
