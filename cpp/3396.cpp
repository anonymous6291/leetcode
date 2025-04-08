class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        bool f[101] = {false};
        for (int i = nums.size() - 1; i >= 0; i--)
            if (f[nums[i]])
                return i / 3 + 1;
            else
                f[nums[i]] = true;
        return 0;
    }
};
