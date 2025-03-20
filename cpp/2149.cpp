class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int l = nums.size();
        vector<int> res(l);
        for (int i = 0, n = 1, p = 0; i < l; i++) {
            if (nums[i] < 0) {
                res[n] = nums[i];
                n += 2;
            } else {
                res[p] = nums[i];
                p += 2;
            }
        }
        return res;
    }
};
