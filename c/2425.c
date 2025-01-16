int xorAllNums(int* nums1, int n1, int* nums2, int n2) {
    int res = 0;
    if (n1 % 2 != 0)
        for (int i = 0; i < n2; i++)
            res ^= nums2[i];
    if (n2 % 2 != 0)
        for (int i = 0; i < n1; i++)
            res ^= nums1[i];
    return res;
}
