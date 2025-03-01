class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size() - 1;
        vector<int> res(n + 1);
        int s = 0, e = n, i = 0;
        while (i <= n)
            if (i < n && nums[i] != 0 && nums[i] == nums[i + 1]) {
                res[s++] = nums[i] * 2;
                res[e--] = 0;
                i += 2;
            } else {
                if (nums[i] == 0)
                    res[e--] = 0;
                else
                    res[s++] = nums[i];
                i++;
            }
        return res;
    }
};
