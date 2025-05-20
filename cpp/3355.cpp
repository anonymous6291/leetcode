class Solution {
public:
    bool isZeroArray(vector<int>& n, vector<vector<int>>& q) {
        int l = n.size();
        vector<int> r(l + 1);
        for (vector<int>& i : q) {
            r[i[0]]++;
            r[i[1] + 1]--;
        }
        int p = 0;
        for (int i = 0; i < l; i++) {
            p += r[i];
            if (n[i] > p)
                return false;
        }
        return true;
    }
};
