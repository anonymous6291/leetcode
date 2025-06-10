class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& j) {
        int k = 10001, m = 0;
        for (vector<int>& i : j) {
            k = min(k, min(i[0], i[1]));
            m = max(m, max(i[0], i[1]));
        }
        m -= k - 1;
        vector<int> s(m);
        vector<int> e(m);
        for (vector<int>& i : j) {
            s[i[0] - k]++;
            e[i[1] - k]++;
        }
        vector<vector<int>> l;
        int p = 0, x = -1;
        for (int i = 0; i < m; i++) {
            p += s[i];
            if (p > 0 && x == -1)
                x = i;
            p -= e[i];
            if (p == 0 && x != -1) {
                vector<int> t;
                t.push_back(x + k);
                t.push_back(i + k);
                l.push_back(t);
                x = -1;
            }
        }
        return l;
    }
};
