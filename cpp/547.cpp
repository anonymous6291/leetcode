class Solution {
private:
    void ma(vector<vector<int>>& ic, int i, int n, vector<bool>& trav) {
        if (trav[i])
            return;
        trav[i] = true;
        for (int j = 0; j < n; j++)
            if (ic[i][j] == 1)
                ma(ic, j, n, trav);
    }

public:
    int findCircleNum(vector<vector<int>>& ic) {
        int n = ic.size(), prov = 0;
        vector<bool> trav(n, false);
        for (int i = 0; i < n; i++)
            if (!trav[i]) {
                ma(ic, i, n, trav);
                prov++;
            }
        return prov;
    }
};
