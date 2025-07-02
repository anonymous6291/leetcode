class Solution {
public:
    int lengthOfLongestSubstring(string& s) {
        int n = s.length(), p = 0, l = 0;
        vector<int> m(128, -1);
        for (int i = 0; i < n; i++) {
            p = max(p, m[s[i]] + 1);
            m[s[i]] = i;
            l = max(l, i - p + 1);
        }
        return l;
    }
};
