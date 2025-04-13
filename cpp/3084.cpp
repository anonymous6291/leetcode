class Solution {
public:
    long long countSubstrings(string& s, char c) {
        long long n = 0;
        for (int l = s.size() - 1; l >= 0; l--)
            if (s[l] == c)
                n++;
        return (n * (n + 1)) / 2;
    }
};
