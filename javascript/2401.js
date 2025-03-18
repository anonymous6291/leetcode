/**
 * @param {number[]} nums
 * @return {number}
 */
var longestNiceSubarray = function (nums) {
    let n = nums.length, po = 0, f = 0, r = 0, ml = 0;
    while (f < n) {
        while ((po & nums[f]) != 0)
            po ^= nums[r++];
        po |= nums[f++];
        if (f - r > ml)
            ml = f - r;
    }
    return ml;
};
