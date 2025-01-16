/**
 * @param {number[]} n1
 * @param {number[]} n2
 * @return {number}
 */
var xorAllNums = function (n1, n2) {
    let res = 0;
    if (n1.length % 2 != 0)
        for (let i of n2)
            res ^= i;
    if (n2.length % 2 != 0)
        for (let i of n1)
            res ^= i;
    return res;
};
