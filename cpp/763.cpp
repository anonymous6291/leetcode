class Solution {
public:
    vector<int> partitionLabels(string& s) {
        vector<int> res;
        int n = s.length();
        int pi[26] = {0};
        for (int i = n - 1; i >= 0; i--) {
            int t = s[i] - 97;
            if (pi[t] == 0)
                pi[t] = i;
        }
        int pti = 0, cti = 0;
        for (int i = 0; i < n; i++) {
            if (cti < i) {
                res.push_back(cti - pti + 1);
                pti = i;
            }
            int t = pi[s[i] - 97];
            if (t > cti)
                cti = t;
        }
        res.push_back(cti - pti + 1);
        return res;
    }
};
