class Solution {
private:
    int traverse(vector<int>& s, vector<int>& c, vector<vector<int>>& k,
                 vector<vector<int>>& b, int j, vector<bool>& p,
                 vector<bool>& v) {
        if (s[j] == 0) {
            p[j] = true;
            return 0;
        }
        if (v[j])
            return 0;
        v[j] = true;
        int r = c[j];
        for (int m : k[j]) {
            s[m] = 1;
            if (p[m])
                r += traverse(s, c, k, b, m, p, v);
        }
        for (int m : b[j])
            r += traverse(s, c, k, b, m, p, v);
        return r;
    }

public:
    int maxCandies(vector<int>& s, vector<int>& c, vector<vector<int>>& k,
                   vector<vector<int>>& b, vector<int>& i) {
        int n = s.size();
        vector<bool> p(n, false);
        vector<bool> v(n, false);
        int r = 0;
        for (int j : i)
            r += traverse(s, c, k, b, j, p, v);
        return r;
    }
};
