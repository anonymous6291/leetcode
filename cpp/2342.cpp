#define MAX(a, b) ((a > b) ? a : b)

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int m1[82] = {0};
        int m2[82] = {0};
        int ms = -1;
        for (int i : nums) {
            int s = 0, t = i;
            while (t > 0) {
                s += t % 10;
                t /= 10;
            }
            if (m1[s] < i) {
                m2[s] = m1[s];
                m1[s] = i;
            } else if (m2[s] < i)
                m2[s] = i;
            if (m2[s] != 0)
                ms = MAX(ms, m1[s] + m2[s]);
        }
        return ms;
    }
};
