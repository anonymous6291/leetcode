class Solution {
public:
    int findLucky(vector<int>& arr) {
        int f[501] = {0};
        for (int i : arr)
            ++f[i];
        for (int i = 500; i >= 1; i--)
            if (i == f[i])
                return i;
        return -1;
    }
};
