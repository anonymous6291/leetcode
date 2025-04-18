class Solution {
public:
    bool checkIfCanBreak(string& s1, string& s2) {
        int f[26] = {0};
        for (int i = s1.length() - 1; i >= 0; i--) {
            f[s1[i] - 97]++;
            f[s2[i] - 97]--;
        }
        int p1 = 0, p2 = 0;
        bool f1 = true, f2 = true;
        for (int i = 0; i < 26; i++) {
            p1 += f[i];
            p2 -= f[i];
            if (p1 < 0)
                f1 = false;
            if (p2 < 0)
                f2 = false;
        }
        return f1 || f2;
    }
};
