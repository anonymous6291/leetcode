int findMiddleIndex(int* nums, int n) {
    int ss = 0, ps = 0;
    for (int i = 0; i < n; i++)
        ss += nums[i];
    for (int i = 0; i < n; i++) {
        ss -= nums[i];
        if (ps == ss)
            return i;
        ps += nums[i];
    }
    return -1;
}
