/**
 * @param {number[]} nums
 * @return {number}
 */
var longestSubarray = function (nums) {
    let n = nums.length, p = 0, c = 0, mc = 0, i = 0;
    while (i < n) {
        if (nums[i++] == 0)
            c++;
        while (c == 2)
            if (nums[p++] == 0)
                c--;
        while (i < n) {
            if (nums[i] == 0)
                if (c == 1)
                    break;
                else
                    c = 1;
            i += 1;
        }
        if (i - p - 1 > mc)
            mc = i - p - 1;
    }
    return mc;
};
