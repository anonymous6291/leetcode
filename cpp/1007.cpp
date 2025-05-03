class Solution {
public:
    int find(vector<int>& t, vector<int>& b, int v) {
        int ts = 0, bs = 0, n = t.size();
        for (int i = 0; i < n; i++) {
            if (t[i] == v)
                ts++;
            if (b[i] == v)
                bs++;
            else if (t[i] != v)
                return -1;
        }
        return min(min(ts, bs), n - max(ts, bs));
    }

public:
    int minDominoRotations(vector<int>& t, vector<int>& b) {
        int r = t.size();
        for (int i = 1; i < 7; i++) {
            int v = find(t, b, i);
            if (v != -1)
                r = min(r, v);
        }
        if (r == t.size())
            return -1;
        return r;
    }
};
