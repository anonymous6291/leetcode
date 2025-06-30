/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** cellsInRange(char* s, int* r) {
    char i = s[0], ls = s[3], vs = s[4];
    int k = (ls - i + 1) * (vs - s[1] + 1);
    *r = k;
    char** l = (char**)malloc(sizeof(char*) * k);
    k = 0;
    for (; i <= ls; i++) {
        for (char j = s[1]; j <= vs; j++) {
            char* p = (char*)malloc(sizeof(char) * 3);
            p[0] = i;
            p[1] = j;
            p[2] = '\0';
            l[k++] = p;
        }
    }
    return l;
}
