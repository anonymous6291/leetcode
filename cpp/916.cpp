class Solution {
private:
    int max(int i, int j) { return (i > j) ? i : j; }

private:
    bool check(int* ar, int* c) {
        for (int i = 0; i < 26; i++)
            if (ar[i] < c[i])
                return false;
        return true;
    }

public:
    vector<string> wordSubsets(vector<string>& w1, vector<string>& w2) {
        int c[26] = {0};
        for (string& s : w2) {
            int ar[26] = {0};
            const int n = s.length();
            for (int i = 0; i < n; i++)
                c[s[i] - 'a'] = max(c[s[i] - 'a'], ++ar[s[i] - 'a']);
        }
        vector<string> res(0);
        for (string& s : w1) {
            int ar[26] = {0};
            const int n = s.length();
            for (int i = 0; i < n; i++)
                ++ar[s[i] - 'a'];
            if (check(ar, c))
                res.push_back(s);
        }
        return res;
    }
};
