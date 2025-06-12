class Solution {
public:
    int maxAdjacentDistance(vector<int>& n) {
        int l = n.size(), m = abs(n[0] - n[l - 1]);
        for (int i = 1; i < l; i++)
            m = max(m, abs(n[i] - n[i - 1]));
        return m;
    }
};
