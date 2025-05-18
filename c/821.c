/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int abs(int i) { return (i < 0) ? -i : i; }

int* shortestToChar(char* w, char c, int* l) {
    int n = strlen(w);
    *l = n;
    int* r = (int*)malloc(sizeof(int) * n);
    int* p = (int*)malloc(sizeof(int) * n);
    int i = 0, k = 0;
    for (int j = 0; j < n; j++)
        if (w[j] == c)
            p[i++] = j;
    for (int j = 0; j < n; j++) {
        if (k + 1 < i && abs(p[k] - j) > abs(p[k + 1] - j))
            k++;
        r[j] = abs(p[k] - j);
    }
    return r;
}
