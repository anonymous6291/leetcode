/**
 * @param {number[]} nums
 * @return {number}
 */
var countBadPairs = function (nums) {
    let n = nums.length;
    const m = new Map();
    var count = 0;
    for (let i = 0; i < n; i++) {
        let t = i - nums[i]
        let r = m.get(t)
        if (r == undefined) {
            count += i
            r = 1
        }
        else {
            count += i - r
            r++
        }
        m.set(t, r)
    }
    return count;
};
