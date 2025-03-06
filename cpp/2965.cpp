class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& g) {
        int n = g.size(), rep = -1;
        vector<bool> f(n * n + 1, false);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (f[g[i][j]])
                    rep = g[i][j];
                else
                    f[g[i][j]] = true;
        for (int i = n * n; i >= 0; i--)
            if (!f[i]) {
                vector<int> res(2);
                res[0] = rep;
                res[1] = i;
                return res;
            }
        return vector<int>();
    }
};
