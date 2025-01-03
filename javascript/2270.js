/**
 * @param {number[]} nums
 * @return {number}
 */
var waysToSplitArray = function (nums) {
    let count = 0, ps = 0, ss = 0;
    for (let i of nums)
        ss += i;
    let n = nums.length - 1;
    for (let i = 0; i < n; i++) {
        ps += nums[i];
        ss -= nums[i];
        if (ps >= ss)
            ++count;
    }
    return count;
};
