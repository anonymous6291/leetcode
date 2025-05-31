class Solution {
public:
    bool digitCount(string& n) {
        int f[10] = {0};
        int l = n.length();
        for (int i = 0; i < l; i++)
            f[n[i] - '0']++;
        for (int i = 0; i < l; i++)
            if (f[i] != n[i] - '0')
                return false;
        return true;
    }
};
