/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

bool vowel(char c) {
    return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u');
}

bool vs(char* s) { return vowel(s[0]) && vowel(s[strlen(s) - 1]); }

int* vowelStrings(char** w, int ws, int** q, int qs, int* qcs, int* rs) {
    *rs = qs;
    int* psa = (int*)malloc(sizeof(int) * ws);
    int ps = 0;
    for (int i = 0; i < ws; i++) {
        if (vs(w[i]))
            ++ps;
        psa[i] = ps;
    }
    int* res = (int*)malloc(sizeof(int) * qs);
    for (int i = 0; i < qs; i++)
        if (q[i][0] == 0)
            res[i] = psa[q[i][1]];
        else
            res[i] = psa[q[i][1]] - psa[q[i][0] - 1];
    return res;
}
