/**
 * @param {number[]} n
 * @param {number[][]} q
 * @return {boolean}
 */
var isZeroArray = function (n, q) {
    let l = n.length, p = 0;
    let r = new Array(l + 1).fill(0);
    for (let i of q) {
        r[i[0]]++;
        r[i[1] + 1]--;
    }
    for (let i = 0; i < l; i++) {
        p += r[i];
        if (n[i] > p)
            return false;
    }
    return true;
};
