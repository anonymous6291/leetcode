class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        bool f[1001] = {false};
        int u = 0;
        for (int i = 0; i < n1; i++)
            if (!f[nums1[i][0]]) {
                f[nums1[i][0]] = true;
                u++;
            }
        for (int i = 0; i < n2; i++)
            if (!f[nums2[i][0]]) {
                f[nums2[i][0]] = true;
                u++;
            }
        vector<vector<int>> res(u, vector<int>(2));
        int i = 0, j = 0;
        u = 0;
        while (i < n1 || j < n2) {
            if (i == n1 || (j < n2 && nums1[i][0] > nums2[j][0])) {
                res[u][0] = nums2[j][0];
                res[u++][1] = nums2[j++][1];
            } else if (j == n2 || nums1[i][0] < nums2[j][0]) {
                res[u][0] = nums1[i][0];
                res[u++][1] = nums1[i++][1];
            } else {
                res[u][0] = nums1[i][0];
                res[u++][1] = nums1[i++][1] + nums2[j++][1];
            }
        }
        return res;
    }
};
