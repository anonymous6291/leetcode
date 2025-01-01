class Solution {
private:
    int max(int i, int j) { return (i > j) ? i : j; }

public:
    int maxScore(string s) {
        int n = s.length(), r = 0, l = (s.at(0) == '0' ? 1 : 0);
        for (int i = 1; i < n; i++)
            if (s.at(i) == '1')
                ++r;
        int maxs = r + l;
        --n;
        for (int i = 1; i < n; i++)
            if (s.at(i) == '0') {
                ++l;
                maxs = max(maxs, r + l);
            } else
                --r;
        return maxs;
    }
};
