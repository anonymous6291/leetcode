int maxAbsoluteSum(int* nums, int n) {
    int cs1 = 0, cs2 = 0, ms1 = -100000, ms2 = 100000;
    for (int i = 0; i < n; i++) {
        cs1 = ((cs1 < 0) ? 0 : cs1) + nums[i];
        cs2 = ((cs2 > 0) ? 0 : cs2) + nums[i];
        ms1 = (ms1 > cs1) ? ms1 : cs1;
        ms2 = (ms2 < cs2) ? ms2 : cs2;
    }
    return (ms1 > -ms2) ? ms1 : -ms2;
}
