/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* n, int e, int t, int* l) {
    int s = 0;
    e--;
    *l = 2;
    while (s < e) {
        if (n[s] + n[e] == t) {
            int* r = (int*)malloc(sizeof(int) * 2);
            r[0] = s + 1;
            r[1] = e + 1;
            return r;
        }
        if (n[s] + n[e] < t)
            s++;
        else
            e--;
    }
    return 0;
}
