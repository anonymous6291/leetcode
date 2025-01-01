long long count(long long n) { return (n * (n + 1)) / 2; }
int abs(int n) { return (n < 0) ? -n : n; }
int maxnum(int i, int j) { return (i > j) ? i : j; }
long long continuousSubarrays(int* nums, int n) {

    long long total = 0;
    int min = nums[0], max = nums[0], s = 0, si = 0, bi = 0;
    for (int i = 1; i < n; i++) {
        if (abs(nums[i] - min) <= 2 && abs(nums[i] - max) <= 2) {
            if (min >= nums[i]) {
                min = nums[i];
                si = i;
            }
            if (max <= nums[i]) {
                max = nums[i];
                bi = i;
            }
        } else {
            total += count(i - s);
            int t = i;
            if (abs(nums[i] - min) > 2) {
                if (abs(nums[i] - max) > 2) {
                    i = maxnum(si, bi);
                } else {
                    i = si;
                }
            } else {
                i = bi;
            }
            total -= count(t - i - 1);
            s = si = bi = i + 1;
            min = max = nums[i + 1];
        }
    }
    return total + count(n - s);
}
