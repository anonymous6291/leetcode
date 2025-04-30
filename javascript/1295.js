/**
 * @param {number[]} nums
 * @return {number}
 */
var findNumbers = function (nums) {
    let c = 0;
    for (let i of nums)
        if ((i > 9 && i < 100) || (i > 999 & i < 10000) || i == 100000)
            c++;
    return c;
};
