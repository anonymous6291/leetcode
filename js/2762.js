/**
 * @param {number[]} nums
 * @return {number}
 */
var continuousSubarrays = function (nums) {
    var count = function (n) { return (n * (n + 1)) / 2; };
    var abs = function (n) { return (n < 0) ? -n : n; };
    var maxnum = function (i, j) { return (i > j) ? i : j; };
    var total = 0;
    var n = nums.length;
    var min = nums[0], max = nums[0], s = 0, si = 0, bi = 0;
    for (var i = 1; i < n; i++) {
        if (abs(nums[i] - min) <= 2 && abs(nums[i] - max) <= 2) {
            if (min >= nums[i]) {
                min = nums[i];
                si = i;
            }
            if (max <= nums[i]) {
                max = nums[i];
                bi = i;
            }
        } else {
            total += count(i - s);
            var t = i;
            if (abs(nums[i] - min) > 2) {
                if (abs(nums[i] - max) > 2) {
                    i = maxnum(si, bi);
                } else {
                    i = si;
                }
            } else {
                i = bi;
            }
            total -= count(t - i - 1);
            s = si = bi = i + 1;
            min = max = nums[i + 1];
        }
    }
    return total + count(n - s);
};
