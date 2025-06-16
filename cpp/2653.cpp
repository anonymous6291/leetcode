class Solution {
private:
    int find(int* f, int x) {
        for (int i = 0; i < 50; i++) {
            x -= f[i];
            if (x < 1)
                return i - 50;
        }
        return 0;
    }

public:
    vector<int> getSubarrayBeauty(vector<int>& n, int k, int x) {
        int l = n.size();
        int f[101] = {0};
        vector<int> r;
        for (int i = 0; i < k; i++)
            f[n[i] + 50]++;
        r.push_back(find(f, x));
        for (int i = k; i < l; i++) {
            f[n[i - k] + 50]--;
            f[n[i] + 50]++;
            r.push_back(find(f, x));
        }
        return r;
    }
};
