class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.length() < k)
            return false;
        int f[26] = {0};
        for (char c : s)
            f[c - 'a'] += 1;
        int j = k;
        for (int i : f)
            j -= i % 2;
        return j >= 0;
    }
};
