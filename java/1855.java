class Solution {
    public int maxDistance(int[] nums1, int[] nums2) {
        int i = nums1.length - 1, j = nums2.length - 1, md = 0;
        while (i >= 0) {
            while (i <= j && nums1[i] > nums2[j])
                j--;
            if (j - i > md)
                md = j - i;
            i--;
        }
        return md;
    }
}
