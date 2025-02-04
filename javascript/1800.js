/**
 * @param {number[]} nums
 * @return {number}
 */
var maxAscendingSum = function (nums) {
    let s = nums[0], n = nums.length, ms = nums[0];
    for (let i = 1; i < n; i++) {
        s = nums[i] + ((nums[i - 1] < nums[i]) ? s : 0);
        ms = Math.max(ms, s);
    }
    return ms;
};
