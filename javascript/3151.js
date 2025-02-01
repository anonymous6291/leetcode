/**
 * @param {number[]} nums
 * @return {boolean}
 */
var isArraySpecial = function (nums) {
    let p = (nums[0] & 1) ^ 1;
    for (let i of nums) {
        if ((i & 1) == p)
            return false;
        p ^= 1;
    }
    return true;
};
