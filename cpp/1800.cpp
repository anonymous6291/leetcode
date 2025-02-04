#define MAX(a, b) ((a > b) ? a : b)

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int s = nums[0], n = nums.size(), ms = nums[0];
        for (int i = 1; i < n; i++) {
            s = nums[i] + ((nums[i - 1] < nums[i]) ? s : 0);
            ms = MAX(ms, s);
        }
        return ms;
    }
};
