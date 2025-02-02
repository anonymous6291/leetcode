/**
 * @param {number[]} nums
 * @return {boolean}
 */
var check = function (nums) {
    let n = nums.length, df = false;
    for (let i = 1; i < n; i++)
        if (nums[i - 1] > nums[i]) {
            if (df)
                return false;
            df = true;
        }
    return (nums[0] >= nums[n - 1] || !df);
};
