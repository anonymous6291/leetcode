/**
 * @param {string} n
 * @return {boolean}
 */
var digitCount = function (n) {
    let f = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
    let l = n.length;
    for (let i = 0; i < l; i++)
        f[n.codePointAt(i) - 48]++;
    for (let i = 0; i < l; i++)
        if (f[i] != n.codePointAt(i) - 48)
            return false;
    return true;
};
