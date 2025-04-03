#define max(a, b) ((a > b) ? a : b)

long long maximumTripletValue(int* nums, int n) {
    long long res = 0, diff = 0;
    int i = 0;
    for (int j = 0; j < n; j++) {
        res = max(res, diff * nums[j]);
        diff = max(diff, i - nums[j]);
        if (nums[j] > i)
            i = nums[j];
    }
    return res;
}
