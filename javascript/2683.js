/**
 * @param {number[]} d
 * @return {boolean}
 */
var doesValidArrayExist = function (d) {
    let res = 0;
    for (let i of d)
        res ^= i;
    return res == 0;
};
