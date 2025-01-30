/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int n, int* rs) {
    *rs = n;
    int f[101] = {0};
    for (int i = 0; i < n; i++)
        ++f[nums[i]];
    int ps = 0;
    for (int i = 0; i < 101; i++) {
        ps += f[i];
        f[i] = ps - f[i];
    }
    for (int i = 0; i < n; i++)
        nums[i] = f[nums[i]];
    return nums;
}
