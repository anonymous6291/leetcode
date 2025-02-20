/**
 * @param {string[]} nums
 * @return {string}
 */
var findDifferentBinaryString = function (nums) {
    let n = nums.length;
    let res = [];
    for (let i = 0; i < n; i++)
        res.push((nums[i].charAt(i) == '1') ? '0' : '1');
    return res.join("");
};
