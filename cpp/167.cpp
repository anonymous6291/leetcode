class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int s = 0, e = n.size() - 1;
        while (s < e) {
            if (n[s] + n[e] == t) {
                vector<int> r(2);
                r[0] = s + 1;
                r[1] = e + 1;
                return r;
            }
            if (n[s] + n[e] < t)
                s++;
            else
                e--;
        }
        return vector<int>(1);
    }
};
