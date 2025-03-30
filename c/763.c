/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* partitionLabels(char* s, int* rs) {
    int* res;
    int n = strlen(s);
    int pi[26] = {0};
    for (int i = n - 1; i >= 0; i--) {
        int t = s[i] - 97;
        if (!pi[t])
            pi[t] = i;
    }
    int len = 1;
    int pti = 0, cti = 0;
    for (int i = 0; i < n; i++) {
        if (cti < i) {
            len++;
            pti = i;
        }
        int t = pi[s[i] - 97];
        if (t > cti)
            cti = t;
    }
    *rs = len;
    res = (int*)malloc(sizeof(int) * len);
    pti = 0, cti = 0, len = 0;
    for (int i = 0; i < n; i++) {
        if (cti < i) {
            res[len++] = cti - pti + 1;
            pti = i;
        }
        int t = pi[s[i] - 97];
        if (t > cti)
            cti = t;
    }
    res[len] = cti - pti + 1;
    return res;
}
