int longestNiceSubarray(int* nums, int n) {
    int po = 0, f = 0, r = 0, ml = 0;
    while (f < n) {
        while (po & nums[f])
            po ^= nums[r++];
        po |= nums[f++];
        if (f - r > ml)
            ml = f - r;
    }
    return ml;
}
