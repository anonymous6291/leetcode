class Solution {
    public long minSum(int[] nums1, int[] nums2) {
        long s1 = 0, s2 = 0;
        int z1 = 0, z2 = 0;
        for (int i : nums1)
            if (i == 0)
                z1++;
            else
                s1 += i;
        for (int i : nums2)
            if (i == 0)
                z2++;
            else
                s2 += i;
        if (s1 < s2) {
            long r = s1 + Math.max(s2 - s1 + z2, z1);
            if ((r != s1 && z1 == 0) || (r > s2 && z2 == 0))
                return -1;
            return r;
        } else {
            long r = s2 + Math.max(s1 - s2 + z1, z2);
            if ((r != s2 && z2 == 0) || (r > s1 && z1 == 0))
                return -1;
            return r;
        }
    }
}
