class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        int m = -1, n = c.size();
        for (int i = 0; i < n; i++)
            m = max(m, c[i]);
        vector<bool> l;
        for (int i = 0; i < n; i++)
            l.push_back((c[i] + e) >= m);
        return l;
    }
};
