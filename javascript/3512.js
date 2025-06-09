/**
 * @param {number[]} n
 * @param {number} k
 * @return {number}
 */
var minOperations = function (n, k) {
    let s = 0;
    for (let i of n)
        s += i;
    return s % k;
};
