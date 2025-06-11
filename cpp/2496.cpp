class Solution {
private:
    int find(string& s) {
        int n = s.length(), v = 0;
        for (int i = 0; i < n; i++) {
            int t = s[i] - 48;
            if (t > 9)
                return n;
            v = v * 10 + t;
        }
        return v;
    }

public:
    int maximumValue(vector<string>& s) {
        int m = 0;
        for (string t : s)
            m = max(m, find(t));
        return m;
    }
};
