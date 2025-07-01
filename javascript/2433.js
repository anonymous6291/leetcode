/**
 * @param {number[]} p
 * @return {number[]}
 */
var findArray = function (p) {
    for (let i = p.length - 1; i > 0; i--)
        p[i] ^= p[i - 1];
    return p;
};
