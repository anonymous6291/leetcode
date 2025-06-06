class Solution {
public:
    string replaceDigits(string& s) {
        int n = s.length();
        string r = "";
        for (int i = 0; i < n; i += 2) {
            r += s[i];
            if (i + 1 < n)
                r += (char)(s[i] + s[i + 1] - 48);
        }
        return r;
    }
};
