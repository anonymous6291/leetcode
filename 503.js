/**
 * @param {number[]} nums
 * @return {number[]}
 */
var nextGreaterElements = function (nums) {
    let s = [];
    let n = nums.length, p = -1000000005, ind = 10002;
    for (let i = 0; i < n; ++i)
        if (nums[i] > p)
            s[ind++] = p = nums[i];
    p = 10002;
    for (let i = n - 1; i >= 0; --i) {
        while (p < ind && s[p] <= nums[i])
            ++p;
        let t = nums[i];
        if (p == ind)
            nums[i] = -1;
        else
            nums[i] = s[p];
        s[--p] = t;
    }
    return nums;
};
