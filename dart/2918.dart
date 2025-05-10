class Solution {
    int max(int a, int b){
        return (a > b) ? a : b;
    }

    int minSum(List<int> nums1, List<int> nums2) {
        int s1 = 0, s2 = 0, z1 = 0, z2 = 0;
        for (int i in nums1)
            if (i == 0)
                z1++;
            else
                s1 += i;
        for (int i in nums2)
            if (i == 0)
                z2++;
            else
                s2 += i;
        s1 += z1;
        s2 += z2;
        if (s1 < s2 && z1 == 0)
            return -1;
        if (s1 > s2 && z2 == 0)
            return -1;
        return max(s1, s2);
    }
}
