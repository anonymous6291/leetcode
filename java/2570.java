class Solution {
    public int[][] mergeArrays(int[][] nums1, int[][] nums2) {
        int n1 = nums1.length, n2 = nums2.length;
        boolean f[] = new boolean[1001];
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
        int res[][] = new int[u][];
        int i = 0, j = 0;
        u = 0;
        while (i < n1 || j < n2) {
            if (i == n1 || (j < n2 && nums1[i][0] > nums2[j][0]))
                res[u++] = nums2[j++];
            else if (j == n2 || nums1[i][0] < nums2[j][0])
                res[u++] = nums1[i++];
            else {
                nums1[i][1] += nums2[j++][1];
                res[u++] = nums1[i++];
            }
        }
        return res;
    }
}
