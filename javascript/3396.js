/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumOperations = function (nums) {
    let f = new Array(101).fill(false);
    for (let i = nums.length - 1; i >= 0; i--)
        if (f[nums[i]])
            return parseInt(i / 3) + 1;
        else
            f[nums[i]] = true;
    return 0;
};
