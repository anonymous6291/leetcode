#define max(a, b) ((a > b) ? a : b)

class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long s1 = 0, s2 = 0, z1 = 0, z2 = 0;
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
        s1 += z1;
        s2 += z2;
        if (s1 < s2 && z1 == 0)
            return -1;
        if (s1 > s2 && z2 == 0)
            return -1;
        return max(s1, s2);
    }
};
