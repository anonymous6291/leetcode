/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = function (nums) {
    let n = nums.length;
    let f = new Array(101).fill(0);
    for (let i of nums)
        ++f[i];
    let ps = 0;
    for (let i = 0; i < 101; i++) {
        ps += f[i];
        f[i] = ps - f[i];
    }
    for (let i = 0; i < n; i++)
        nums[i] = f[nums[i]];
    return nums;
};
