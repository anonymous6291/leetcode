class Solution {
public:
    int partitionString(string& s) {
        int n = s.length(), c = 1, f = 0;
        for (int i = 0; i < n; i++) {
            int x = 1 << (s[i] - 97);
            if ((f & x) != 0) {
                f = 0;
                c++;
            }
            f |= x;
        }
        return c;
    }
};
