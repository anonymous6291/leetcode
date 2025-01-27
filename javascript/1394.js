/**
 * @param {number[]} arr
 * @return {number}
 */
var findLucky = function (arr) {
    let f = new Array(501).fill(0);
    for (let i of arr)
        ++f[i];
    for (let i = 500; i >= 1; i--)
        if (i == f[i])
            return i;
    return -1;
};
