/**
 * @param {number[]} nums
 * @param {number} k
 * @param {number} multiplier
 * @return {number[]}
 */
var getFinalState = function (nums, k, m) {
    let n = nums.length;
    while (--k >= 0) {
        let i = 0;
        for (let j = 1; j < n; j++)
            if (nums[i] > nums[j])
                i = j;
        nums[i] *= m;
    }
    return nums;
};
