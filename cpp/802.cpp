class Solution {
private:
    bool find(vector<vector<int>>& g, int i, vector<bool>& pter,
              vector<bool>& trav) {
        if (trav[i])
            return pter[i];
        trav[i] = true;
        for (int j : g[i])
            if (!find(g, j, pter, trav))
                return false;
        pter[i] = true;
        return true;
    }

public:
    vector<int> eventualSafeNodes(vector<vector<int>>& g) {
        int n = g.size();
        vector<bool> pter(n, false);
        vector<bool> trav(n, false);
        vector<int> res(0);
        for (int i = 0; i < n; i++)
            if (find(g, i, pter, trav))
                res.push_back(i);
        return res;
    }
};
