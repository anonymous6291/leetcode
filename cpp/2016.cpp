class Solution {
public:
    int maximumDifference(vector<int>& n) {
        int p = n[0], l = n.size(), m = -1;
        for (int i = 1; i < l; i++)
            if (p < n[i])
                m = max(m, n[i] - p);
            else
                p = n[i];
        return m;
    }
};
