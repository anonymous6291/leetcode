class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size(), count = 0;
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
};
