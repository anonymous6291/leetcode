/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int hcf(int a, int b) {
    if (!(a % b))
        return b;
    return hcf(b, a % b);
}

char* make(int i, int j) {
    int n = ((i == 100) ? 3 : ((i > 9) ? 2 : 1)) + ((j > 9) ? 2 : 1) + 1;
    char* res = (char*)malloc(sizeof(char) * (n + 1));
    res[n] = '\0';
    while (i) {
        res[--n] = (char)((i % 10) + '0');
        i /= 10;
    }
    res[--n] = '/';
    while (j) {
        res[--n] = (char)((j % 10) + '0');
        j /= 10;
    }
    return res;
}

char** simplifiedFractions(int n, int* rs) {
    int count = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j < i; j++)
            if (hcf(i, j) == 1)
                count++;
    *rs = count;
    char** res = (char**)malloc(sizeof(char*) * count);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j < i; j++)
            if (hcf(i, j) == 1)
                res[--count] = make(i, j);
    return res;
}
