class Solution {
public:
    bool isCovered(vector<vector<int>>& j, int l, int r) {
        int f[52] = {0};
        for (auto& i : j) {
            f[i[0]]++;
            f[i[1] + 1]--;
        }
        int p = 0;
        for (int i = 0; i <= 51; i++) {
            p += f[i];
            if (i >= l && i <= r && p == 0)
                return false;
        }
        return true;
    }
};
