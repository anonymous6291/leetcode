/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var minSum = function (nums1, nums2) {
    var s1 = 0, s2 = 0, z1 = 0, z2 = 0;
    for (let i of nums1)
        if (i == 0)
            z1++;
        else
            s1 += i;
    for (let i of nums2)
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
    return Math.max(s1, s2);
};
