class Solution {
public:
    vector<int> findArray(vector<int>& p) {
        for (int i = p.size() - 1; i > 0; i--)
            p[i] ^= p[i - 1];
        return p;
    }
};
