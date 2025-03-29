/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var maxDistance = function (nums1, nums2) {
    let i = nums1.length - 1, j = nums2.length - 1, md = 0;
    while (i >= 0) {
        while (i <= j && nums1[i] > nums2[j])
            j--;
        if (j - i > md)
            md = j - i;
        i--;
    }
    return md;
};
