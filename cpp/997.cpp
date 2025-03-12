class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> tc(n + 1);
        for (vector<int>& i : trust) {
            tc[i[0]] = -10000;
            tc[i[1]]++;
        }
        int judge = -1;
        for (int i = n; i > 0; i--)
            if (tc[i] == n - 1) {
                if (judge != -1)
                    return -1;
                judge = i;
            }
        return judge;
    }
};
