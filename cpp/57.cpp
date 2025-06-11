class Solution {
private:
    bool intersect(vector<int>& i, vector<int>& j) {
        if (i[0] > j[0])
            return intersect(j, i);
        return i[1] >= j[0];
    }

public:
    vector<vector<int>> insert(vector<vector<int>>& i, vector<int>& j) {
        int n = i.size(), m = 0;
        bool d = false;
        for (int k = 0; k < n; k++) {
            if (intersect(i[k], j)) {
                int s = min(i[k][0], j[0]);
                while (k < n && i[k][0] <= j[1])
                    k++;
                vector<int> r;
                r.push_back(s);
                r.push_back(max(i[--k][1], j[1]));
                i[m++] = r;
                d = true;
            } else
                i[m++] = i[k];
        }
        if (!d) {
            vector<vector<int>> r;
            for (int k = 0; k < n;) {
                if (!d && i[k][0] > j[0]) {
                    r.push_back(j);
                    d = true;
                } else
                    r.push_back(i[k++]);
            }
            if (!d)
                r.push_back(j);
            return r;
        }
        vector<vector<int>> r;
        for (int k = 0; k < m; k++)
            r.push_back(i[k]);
        return r;
    }
};
