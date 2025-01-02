class Solution {
private:
    bool vowel(char c) {
        return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') ||
               (c == 'u');
    }

private:
    bool vs(string s) { return vowel(s.at(0)) && vowel(s.at(s.length() - 1)); }

public:
    vector<int> vowelStrings(vector<string>& w, vector<vector<int>>& q) {
        int n = w.size();
        vector<int> psa(n);
        int ps = 0;
        for (int i = 0; i < n; i++) {
            if (vs(w[i]))
                ++ps;
            psa[i] = ps;
        }
        n = q.size();
        vector<int> res(n);
        for (int i = 0; i < n; i++)
            if (q[i][0] == 0)
                res[i] = psa[q[i][1]];
            else
                res[i] = psa[q[i][1]] - psa[q[i][0] - 1];
        return res;
    }
};
