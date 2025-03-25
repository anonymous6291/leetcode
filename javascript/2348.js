/**
 * @param {number[]} nums
 * @return {number}
 */
var zeroFilledSubarray = function (nums) {
    let count = 0;
    var sac = 0;
    for (let i of nums)
        if (i == 0)
            sac += ++count;
        else
            count = 0;
    return sac;
};
