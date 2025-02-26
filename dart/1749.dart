class Solution {
    int maxAbsoluteSum(List<int> nums) {
        int cs1 = 0, cs2 = 0, ms1 = -100000, ms2 = 100000;
        for (int i in nums) {
            cs1 = ((cs1 < 0) ? 0 : cs1) + i;
            cs2 = ((cs2 > 0) ? 0 : cs2) + i;
            ms1 = (ms1 > cs1) ? ms1 : cs1;
            ms2 = (ms2 < cs2) ? ms2 : cs2;
        }
        return max(ms1, -ms2);
    }
}
