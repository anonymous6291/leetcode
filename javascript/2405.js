/**
 * @param {string} s
 * @return {number}
 */
var partitionString = function (s) {
    let n = s.length, c = 1, p = 0, f = 0;
    for (let i = 0; i < n; i++) {
        let x = 1 << (s.codePointAt(i) - 97);
        if ((f & x) != 0) {
            f = 0;
            c++;
        }
        f |= x;
    }
    return c;
};
