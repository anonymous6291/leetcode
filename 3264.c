int* getFinalState(int* nums, int n, int k, int m, int* rs) {
    *rs = n;
    while (--k >= 0) {
        int i = 0;
        for (int j = 1; j < n; j++)
            if (nums[i] > nums[j])
                i = j;
        nums[i] *= m;
    }
    return nums;
}
