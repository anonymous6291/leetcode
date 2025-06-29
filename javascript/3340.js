/**
 * @param {string} n
 * @return {boolean}
 */
var isBalanced = function (n) {
    let l = n.length, b = 0;
    for (let i = 0; i < l; i += 2)
        b += n.codePointAt(i) - 48;
    for (let i = 1; i < l; i += 2)
        b -= n.codePointAt(i) - 48;
    return b == 0;
};
