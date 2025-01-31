class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m = 0, c = 0;
        for (int i : nums)
            if (i == 1)
                c++;
            else {
                m = m > c ? m : c;
                c = 0;
            }
        return (m > c ? m : c);
    }
};
