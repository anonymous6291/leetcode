int* dailyTemperatures(int* temp, int n, int* rs) {
    *rs = n;
    int ind = -1;
    int* s = (int*)malloc(sizeof(int) * n);
    int* res = (int*)malloc(sizeof(int) * n);
    for (int i = n - 1; i >= 0; --i) {
        while (ind >= 0 && temp[i] >= temp[s[ind]])
            --ind;
        res[i] = (ind < 0) ? 0 : (s[ind] - i);
        s[++ind] = i;
    }
    free(s);
    return res;
}
