class Solution {
private:
    bool startsWith(string& w, string& p) {
        int i = 0;
        while (i < p.length()) {
            if (i == w.length() || w[i] != p[i])
                return false;
            ++i;
        }
        return true;
    }

public:
    int prefixCount(vector<string>& w, string p) {
        int count = 0, n = w.size();
        for (int i = 0; i < n; i++)
            if (startsWith(w[i], p))
                ++count;
        return count;
    }
};
