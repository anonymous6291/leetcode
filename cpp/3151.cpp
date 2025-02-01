class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int p = (nums[0] & 1) ^ 1;
        for (int i : nums) {
            if ((i & 1) == p)
                return false;
            p ^= 1;
        }
        return true;
    }
};
