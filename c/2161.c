/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int n, int p, int* rs) {
    *rs = n;
    int s = 0, e = n - 1;
    int* res = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        if (nums[i] < p)
            res[s++] = nums[i];
        if (nums[n - i - 1] > p)
            res[e--] = nums[n - i - 1];
    }
    while (s <= e)
        res[s++] = p;
    return res;
}
