class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& w, vector<int>& g) {
        vector<string> r;
        r.push_back(w[0]);
        int n = w.size();
        for (int i = 1; i < n; i++)
            if (g[i - 1] != g[i])
                r.push_back(w[i]);
        return r;
    }
};
