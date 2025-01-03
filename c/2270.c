int waysToSplitArray(int* nums, int n) {
    int count = 0;
    long int ps = 0, ss = 0;
    for (int i = 0; i < n; i++)
        ss += nums[i];
    --n;
    for (int i = 0; i < n; i++) {
        ps += nums[i];
        ss -= nums[i];
        if (ps >= ss)
            ++count;
    }
    return count;
}
