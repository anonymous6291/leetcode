class Solution {
private:
    bool validHam(string& i, string& j) {
        if (i.length() != j.length())
            return false;
        int n = i.length();
        bool f = false;
        for (int k = 0; k < n; k++)
            if (i[k] != j[k]) {
                if (f)
                    return false;
                f = true;
            }
        return true;
    }

private:
    void find(vector<string>& a, vector<int>& g, int i, int n,
              vector<vector<string>>& l) {
        if (i == n)
            return;
        l[i].push_back(a[i]);
        find(a, g, i + 1, n, l);
        int p = -1;
        for (int k = i + 1; k < n; k++)
            if (g[i] != g[k] && validHam(a[i], a[k]) &&
                (p == -1 || l[p].size() < l[k].size()))
                p = k;
        if (p != -1)
            for (string& s : l[p])
                l[i].push_back(s);
    }

public:
    vector<string> getWordsInLongestSubsequence(vector<string>& w,
                                                vector<int>& g) {
        int n = w.size();
        vector<vector<string>> d(n, vector<string>());
        find(w, g, 0, n, d);
        int t = 0;
        for (int i = 1; i < n; i++)
            if (d[t].size() < d[i].size())
                t = i;
        return d[t];
    }
};
