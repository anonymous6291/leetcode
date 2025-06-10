class Solution {
public:
    int maxDifference(string& s) {
        int n = s.length();
        int f[26] = {0};
        for (int i = 0; i < n; i++)
            f[s[i] - 97]++;
        int o = 0, e = n;
        for (int i = 0; i < 26; i++)
            if (f[i] != 0) {
                if (f[i] % 2 == 0)
                    e = min(e, f[i]);
                else
                    o = max(o, f[i]);
            }
        return o - e;
    }
};
