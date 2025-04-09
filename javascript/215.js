/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var findKthLargest = function (nums, k) {
    let f = new Array(20001).fill(0);
    for (let i of nums)
        f[i + 10000]++;
    for (let i = 20000; i >= 0; i--) {
        k -= f[i];
        if (k <= 0)
            return i - 10000;
    }
    return 0;
};
