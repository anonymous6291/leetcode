/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function (nums) {
    let m = 0, c = 0;
    for (let i of nums)
        if (i == 1)
            c++;
        else {
            m = m > c ? m : c;
            c = 0;
        }
    return (m > c ? m : c);
};
