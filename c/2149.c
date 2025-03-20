/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int l, int* rs) {
    *rs = l;
    int* res = (int*)malloc(sizeof(int) * l);
    int n = 1, p = 0;
    for (int i = 0; i < l; i++) {
        if (nums[i] < 0) {
            res[n] = nums[i];
            n += 2;
        } else {
            res[p] = nums[i];
            p += 2;
        }
    }
    return res;
}
