/**
 * @param {number[][]} j
 * @param {number} l
 * @param {number} r
 * @return {boolean}
 */
var isCovered = function (j, l, r) {
    let f = new Array(52).fill(0);
    for (let i of j) {
        f[i[0]]++;
        f[i[1] + 1]--;
    }
    let p = 0;
    for (let i = 0; i <= 51; i++) {
        p += f[i];
        if (i >= l && i <= r && p == 0)
            return false;
    }
    return true;
};
