class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        int l = n.size(), o = -1, p = 1;
        vector<int> r(l);
        for (int i = 0; i < l; i++)
            if (n[i] == 0) {
                if (o != -1)
                    return r;
                o = i;
            } else
                p *= n[i];
        if (o != -1) {
            r[o] = p;
            return r;
        }
        for (int i = 0; i < l; i++)
            r[i] = p / n[i];
        return r;
    }
};
