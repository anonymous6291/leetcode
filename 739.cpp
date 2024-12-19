class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size(), ind = -1;
        int* s = (int*)malloc(sizeof(int) * n);
        vector<int> res(n);
        for (int i = n - 1; i >= 0; --i) {
            while (ind >= 0 && temp[i] >= temp[s[ind]])
                --ind;
            res[i] = (ind < 0) ? 0 : (s[ind] - i);
            s[++ind] = i;
        }
        free(s);
        return res;
    }
};
