class Solution {
public:
    int numberOfPoints(vector<vector<int>>& n) {
        int c[102] = {0};
        for (vector<int>& l : n) {
            c[l[0]] += 1;
            c[l[1] + 1] -= 1;
        }
        int p = 0, s = 0;
        for (int i = 0; i < 101; i++) {
            s += c[i];
            if (s != 0)
                p++;
        }
        return p;
    }
};
