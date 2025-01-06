class Solution {
public:
    vector<int> minOperations(string b) {
        int n = b.length();
        vector<int> res(n);
        int ps = 0, ss = 0, pbc = 0, sbc = 0;
        for (int i = n - 1; i >= 0; i--) {
            ss += sbc;
            if (b[i] == '1')
                ++sbc;
        }
        for (int i = 0; i < n; i++) {
            res[i] = ss + ps;
            if (b[i] == '1') {
                --sbc;
                ++pbc;
            }
            ss -= sbc;
            ps += pbc;
        }
        return res;
    }
};
