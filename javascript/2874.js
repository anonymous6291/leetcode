/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumTripletValue = function (nums) {
    var res = 0, diff = 0, i = 0;

    var max = function (a, b) { return a > b ? a : b; }

    for (let j of nums) {
        res = max(res, diff * j);
        diff = max(diff, i - j);
        i = max(i, j);
    }
    return res;
};
