#define MAX(a, b) ((a > b) ? a : b)

int maxAscendingSum(int* nums, int n) {
    int s = nums[0], ms = nums[0];
    for (int i = 1; i < n; i++) {
        s = nums[i] + ((nums[i - 1] < nums[i]) ? s : 0);
        ms = MAX(ms, s);
    }
    return ms;
}
