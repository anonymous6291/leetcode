int maxDistance(int* nums1, int n1, int* nums2, int n2) {
    int i = n1 - 1, j = n2 - 1, md = 0;
    while (i >= 0) {
        while (i <= j && nums1[i] > nums2[j])
            j--;
        if (j - i > md)
            md = j - i;
        i--;
    }
    return md;
}
