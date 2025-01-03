class Solution {
    int waysToSplitArray(List<int> nums) {
        int n = nums.length, count = 0;
        double ps = 0, ss = 0;
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
}
