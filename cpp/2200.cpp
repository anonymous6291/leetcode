class Solution {
private:
    int abs(int x) { return x < 0 ? -x : x; }

public:
    vector<int> findKDistantIndices(vector<int>& n, int v, int d) {
        int l = n.size(), k = 0;
        vector<int> s;
        vector<int> r;
        for (int j = 0; j < l; j++)
            if (n[j] == v)
                s.push_back(j);
        int i = s.size();
        for (int j = 0; j < l; j++) {
            if (k == i)
                return r;
            if (s[k] < j && j - s[k] > d)
                k++;
            if (k < i && abs(j - s[k]) <= d)
                r.push_back(j);
        }
        return r;
    }
};
