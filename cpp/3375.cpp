class Solution {
public:
    int minOperations(vector<int>& n, int k) {
        vector<bool> f(101);
        int c = 0;
        for (int i = n.size() - 1; i >= 0; i--) {
            if (n[i] < k)
                return -1;
            f[n[i]] = true;
        }
        for (int i = 100; i > k; i--)
            if (f[i])
                c++;
        return c;
    }
};
