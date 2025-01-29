class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(2 * n);
        int i = 0;
        for (int j = 0; j < n; j++, i++)
            res[i] = nums[j];
        for (int j = 0; j < n; j++, i++)
            res[i] = nums[j];
        return res;
    }
};
