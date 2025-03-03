class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int p) {
        int s = 0, e = nums.size();
        vector<int> res(e, p);
        for (int i = 0; i < e; i++)
            if (nums[i] < p)
                res[s++] = nums[i];
        for (int i = --e; i >= 0; i--)
            if (nums[i] > p)
                res[e--] = nums[i];
        return res;
    }
};
