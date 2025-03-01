/**
 * @param {number[]} nums
 * @return {number[]}
 */
var applyOperations = function (nums) {
    let n = nums.length - 1, s = 0, i = 0;
    let res = new Array(n + 1).fill(0);
    while (i <= n)
        if (i < n && nums[i] != 0 && nums[i] == nums[i + 1]) {
            res[s++] = nums[i] * 2;
            i += 2;
        } else {
            if (nums[i] != 0)
                res[s++] = nums[i];
            i++;
        }
    return res;
};
