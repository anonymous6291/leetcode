/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var countGood = function (nums, k) {
    var m = new Map();
    var count = 0;
    let s = 0, f = 0, n = nums.length, l;
    for (let i = 0; i < n; i++) {
        l = m.has(nums[i]) ? (m.get(nums[i]) + 1) : 1;
        m.set(nums[i], l);
        f += l - 1;
        let t = s;
        while (f >= k) {
            l = m.get(nums[t]) - 1;
            m.set(nums[t++], l);
            f -= l;
            if (f < k)
                count += (n - i) * (t - s);
        }
        s = t;
    }
    return count;
};
