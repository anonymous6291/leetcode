int* nextGreaterElements(int* nums, int n, int* rs) {
    *rs = n;
    int s[20005];
    int p = -1000000005, ind = 10002;
    for (int i = 0; i < n; ++i)
        if (nums[i] > p)
            s[ind++] = p = nums[i];
    p = 10002;
    for (int i = n - 1; i >= 0; --i) {
        while (p < ind && s[p] <= nums[i])
            ++p;
        int t = nums[i];
        if (p == ind)
            nums[i] = -1;
        else
            nums[i] = s[p];
        s[--p] = t;
    }
    return nums;
}
