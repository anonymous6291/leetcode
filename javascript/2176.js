/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var countPairs = function (nums, k) {
    let n = nums.length, c = 0;
    for (let i = 0; i < n; i++)
        for (let j = 0; j < i; j++)
            if (nums[i] == nums[j] && (i * j) % k == 0)
                c++;
    return c;
};
