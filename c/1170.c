/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int f(char* s) {
    int freq[26] = {0};
    while (*s)
        freq[*s++ - 'a']++;
    for (int i = 0; i < 26; i++)
        if (freq[i])
            return freq[i];
    return 0;
}

int* numSmallerByFrequency(char** q, int n, char** w, int wn, int* rs) {
    int freq[12] = {0};
    for (int i = 0; i < wn; i++) {
        int t = f(w[i]);
        while (t + 1)
            freq[t--]++;
    }
    int* res = (int*)malloc(sizeof(int) * n);
    *rs = n;
    for (int i = 0; i < n; i++)
        res[i] = freq[f(q[i]) + 1];
    return res;
}
