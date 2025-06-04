class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& n) {
        int r = 0, l = 0, q = n.size(), m = -1;
        vector<int> v;
        for (int i : n)
            r += i;
        for (int i = 0; i < q; i++) {
            if (r + l > m) {
                m = l + r;
                v.clear();
            }
            if (r + l >= m)
                v.push_back(i);
            l += 1 - n[i];
            r -= n[i];
        }
        if (r + l > m) {
            m = l + r;
            v.clear();
        }
        if (r + l >= m)
            v.push_back(q);
        return v;
    }
};
