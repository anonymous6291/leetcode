/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int n, int* rs) {
    *rs = n;
    int* res = (int*)malloc(sizeof(int) * n);
    n--;
    int s = 0, e = n, i = 0;
    while (i <= n)
        if (i < n && nums[i] != 0 && nums[i] == nums[i + 1]) {
            res[s++] = nums[i] * 2;
            res[e--] = 0;
            i += 2;
        } else {
            if (nums[i] == 0)
                res[e--] = 0;
            else
                res[s++] = nums[i];
            i++;
        }
    return res;
}
