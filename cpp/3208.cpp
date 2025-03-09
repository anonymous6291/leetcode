class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size(), l = n + k, pi = -1, count = 0;
        vector<int> ar(l);
        for (int i = 0; i < k; i++)
            colors.push_back(colors[i]);
        for (int i = 1; i < l; i++) {
            if (colors[i - 1] == colors[i])
                pi = i - 1;
            else if (i - k == pi)
                pi = -1;
            if (i >= k && pi == -1)
                count++;
        }
        return count;
    }
};
