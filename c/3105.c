#define MAX(a, b) ((a > b) ? a : b)

int longestMonotonicSubarray(int* nums, int n) {
    int ic = 1, dc = 1, ml = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i - 1] < nums[i]) {
            ic++;
            dc = 1;
        } else if (nums[i - 1] > nums[i]) {
            ic = 1;
            dc++;
        } else {
            ic = 1;
            dc = 1;
        }
        ml = MAX(MAX(ic, dc), ml);
    }
    return ml;
}
