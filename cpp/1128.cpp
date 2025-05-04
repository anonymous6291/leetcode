class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& d) {
        int f[10][10] = {0};
        int r = 0;
        for (vector<int>& i : d)
            if (i[0] < i[1])
                r += f[i[0]][i[1]]++;
            else
                r += f[i[1]][i[0]]++;
        return r;
    }
};
