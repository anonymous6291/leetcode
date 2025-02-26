/**
 * @param {number[]} nums
 * @return {number}
 */
var maxAbsoluteSum = function (nums) {
    let cs1 = 0, cs2 = 0, ms1 = -1_00_000, ms2 = 1_00_000;
    for (let i of nums) {
        cs1 = ((cs1 < 0) ? 0 : cs1) + i;
        cs2 = ((cs2 > 0) ? 0 : cs2) + i;
        ms1 = (ms1 > cs1) ? ms1 : cs1;
        ms2 = (ms2 < cs2) ? ms2 : cs2;
    }
    return Math.max(ms1, -ms2);
};
