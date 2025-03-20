/**
 * @param {number[]} nums
 * @return {number[]}
 */
var rearrangeArray = function (nums) {
    let l = nums.length, n = 1, p = 0;
    let res = new Array(l);
    for (let i = 0; i < l; i++) {
        if (nums[i] < 0) {
            res[n] = nums[i];
            n += 2;
        } else {
            res[p] = nums[i];
            p += 2;
        }
    }
    return res;
};
