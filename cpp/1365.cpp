class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        int f[101] = {0};
        for (int i : nums)
            ++f[i];
        int ps = 0;
        for (int i = 0; i < 101; i++) {
            ps += f[i];
            f[i] = ps - f[i];
        }
        for (int i = 0; i < n; i++)
            nums[i] = f[nums[i]];
        return nums;
    }
};
