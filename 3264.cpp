class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
        int n = nums.size();
        while (--k >= 0) {
            int i = 0;
            for (int j = 1; j < n; j++)
                if (nums[i] > nums[j])
                    i = j;
            nums[i] *= m;
        }
        return nums;
    }
};
