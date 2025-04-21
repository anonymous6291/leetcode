#define max(x, y) ((x > y) ? x : y)

class Solution {
public:
    int numberOfArrays(vector<int>& d, int l, int u) {
        int n = d.size();
        long long c = l, s = l, e = l;
        for (int i = 0; i < n; i++) {
            c += d[i];
            if (s > c)
                s = c;
            if (e < c)
                e = c;
        }
        return (int)max(0, s - l + u - e + 1);
    }
};
