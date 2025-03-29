class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i = nums1.size() - 1, j = nums2.size() - 1, md = 0;
        while (i >= 0) {
            while (i <= j && nums1[i] > nums2[j])
                j--;
            if (j - i > md)
                md = j - i;
            i--;
        }
        return md;
    }
};
