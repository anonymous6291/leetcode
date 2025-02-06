/**
 * @param {number[]} nums
 * @return {number}
 */
var tupleSameProduct = function (nums) {
    let total = 0, n = nums.length;
    const map = new Map();
    for (let i = 0; i < n; i++)
        for (let j = i + 1; j < n; j++) {
            let t = nums[i] * nums[j];
            let r = map.get(t, 0);
            if (r == undefined)
                r = 0;
            total += r * 8;
            map.set(t, r + 1);
        }
    return total;
};
