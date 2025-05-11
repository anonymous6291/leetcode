class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& a) {
        int n = a.size(), c = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] & 1) {
                c++;
                if (c == 3)
                    return true;
            } else
                c = 0;
        }
        return false;
    }
};
