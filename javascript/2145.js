/**
 * @param {number[]} d
 * @param {number} l
 * @param {number} u
 * @return {number}
 */
var numberOfArrays = function (d, l, u) {
    let c = l, s = l, e = l;
    for (let i of d) {
        c += i;
        s = Math.min(s, c);
        e = Math.max(e, c);
        if (s - l + u - e + 1 < 0)
            return 0;
    }
    return s - l + u - e + 1;
};
