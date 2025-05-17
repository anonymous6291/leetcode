class Solution {
public:
    int minimumOperations(vector<int>& n) {
        bool f[101] = {false};
        int c = 0;
        for (int i : n) {
            if (i != 0 && !f[i]) {
                f[i] = true;
                c++;
            }
        }
        return c;
    }
};
