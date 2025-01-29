/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int n, int* rs) {
    *rs = n * 2;
    int* res = (int*)malloc(sizeof(int) * 2 * n);
    int i = 0;
    for (int j = 0; j < n; j++, i++)
        res[i] = nums[j];
    for (int j = 0; j < n; j++, i++)
        res[i] = nums[j];
    return res;
}
