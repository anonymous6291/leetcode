long long zeroFilledSubarray(int* nums, int n) {
    int count = 0;
    long long sac = 0;
    while (--n + 1)
        if (nums[n])
            count = 0;
        else
            sac += ++count;
    return sac;
}
