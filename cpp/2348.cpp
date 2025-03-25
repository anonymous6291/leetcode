class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int count = 0;
        long long sac = 0;
        for (int i : nums)
            if (i == 0)
                sac += ++count;
            else
                count = 0;
        return sac;
    }
};
