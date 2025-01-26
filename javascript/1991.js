/**
 * @param {number[]} nums
 * @return {number}
 */
var findMiddleIndex = function (nums) {
    let ss = 0, ps = 0, n = nums.length;
    for (let i of nums)
        ss += i;
    for (let i = 0; i < n; i++) {
        ss -= nums[i];
        if (ps == ss)
            return i;
        ps += nums[i];
    }
    return -1;
};
