/**
 * @param {number[]} nums
 * @param {number} p
 * @return {number[]}
 */
var pivotArray = function (nums, p) {
    let s = 0, e = nums.length;
    let res = new Array(e).fill(p);
    for (let i = 0; i < e; i++)
        if (nums[i] < p)
            res[s++] = nums[i];
    for (let i = --e; i >= 0; i--)
        if (nums[i] > p)
            res[e--] = nums[i];
    return res;
};
