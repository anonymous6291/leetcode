/**
 * @param {number[][]} nums1
 * @param {number[][]} nums2
 * @return {number[][]}
 */
var mergeArrays = function (nums1, nums2) {
    let n1 = nums1.length, n2 = nums2.length;
    let res = [];
    let i = 0, j = 0;
    while (i < n1 || j < n2) {
        if (i == n1 || (j < n2 && nums1[i][0] > nums2[j][0]))
            res.push(nums2[j++]);
        else if (j == n2 || nums1[i][0] < nums2[j][0])
            res.push(nums1[i++]);
        else {
            nums1[i][1] += nums2[j++][1];
            res.push(nums1[i++]);
        }
    }
    return res;
};
