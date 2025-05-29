/**
 * @param {string} c
 * @return {number}
 */
var titleToNumber = function (c) {
    let s = 0, n = c.length, m = 1;
    for (let i = n - 1; i >= 0; i--, m *= 26)
        s += m * (c.codePointAt(i) - 64);
    return s;
};
