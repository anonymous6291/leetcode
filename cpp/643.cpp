class Solution {
public:
    double findMaxAverage(vector<int>& n, int k) {
        int l = n.size(), s = 0;
        for (int i = 0; i < k; i++)
            s += n[i];
        int m = s;
        for (int i = k; i < l; i++) {
            s = s - n[i - k] + n[i];
            m = max(m, s);
        }
        return (m * 1.0) / k;
    }
};
