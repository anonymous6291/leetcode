class Solution {
public:
    int titleToNumber(string& c) {
        int s = 0, n = c.length();
        long long m = 1;
        for (int i = n - 1; i >= 0; i--, m *= 26)
            s += m * (c[i] - 64);
        return s;
    }
};
