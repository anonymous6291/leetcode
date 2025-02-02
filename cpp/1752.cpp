class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        bool df = false;
        for (int i = 1; i < n; i++)
            if (nums[i - 1] > nums[i]) {
                if (df)
                    return false;
                df = true;
            }
        return (nums[0] >= nums[n - 1] || !df);
    }
};
