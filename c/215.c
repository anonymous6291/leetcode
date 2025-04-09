int findKthLargest(int* nums, int n, int k) {
    int f[20001] = {0};
    for (int i = 0; i < n; i++)
        f[nums[i] + 10000]++;
    for (int i = 20000; i >= 0; i--) {
        k -= f[i];
        if (k <= 0)
            return i - 10000;
    }
    return 0;
}
