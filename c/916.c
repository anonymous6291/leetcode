/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int max(int i, int j) { return (i > j) ? i : j; }

bool check(int* ar, int* c) {
    for (int i = 0; i < 26; i++)
        if (ar[i] < c[i])
            return false;
    return true;
}

char** wordSubsets(char** w1, int n1, char** w2, int n2, int* rs) {
    int c[26] = {0};
    for (int i = 0; i < n2; i++) {
        int ar[26] = {0};
        int j = 0;
        while (true) {
            int t = w2[i][j++] - 'a';
            if (t < 0)
                break;
            c[t] = max(c[t], ++ar[t]);
        }
    }
    int res = 0;
    for (int i = 0; i < n1; i++) {
        int ar[26] = {0};
        int j = 0;
        while (w1[i][j] != '\0')
            ++ar[w1[i][j++] - 'a'];
        if (check(ar, c)) {
            w1[res++] = w1[i];
        }
    }
    *rs = res;
    return w1;
}
