class Solution {
public:
    vector<int> separateDigits(vector<int>& n) {
        vector<int> r;
        for (int i : n) {
            int s = 1, t = i / 10;
            while (t > 0) {
                s *= 10;
                t /= 10;
            }
            while (s > 0) {
                r.push_back(i / s);
                i %= s;
                s /= 10;
            }
        }
        return r;
    }
};
