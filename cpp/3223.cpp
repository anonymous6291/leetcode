class Solution {
public:
    int minimumLength(string s) {
        vector<int> f(26);
        int count = 0;
        for (int c : s)
            f[c - 97] += 1;
        for (int i : f) {
            if (i == 0)
                continue;
            count += (i & 1 ^ 1) << 1 | i & 1;
        }
        return count;
    }
};
