#define max(a, b) ((a > b) ? a : b)

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long res = 0, diff = 0;
        int i = 0;
        for (int j : nums) {
            res = max(res, diff * j);
            diff = max(diff, i - j);
            if (j > i)
                i = j;
        }
        return res;
    }
};
