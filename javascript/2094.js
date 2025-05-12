/**
 * @param {number[]} d
 * @return {number[]}
 */
var findEvenNumbers = function (d) {
    var find = function (f, c, n, r) {
        if (n == 3) {
            if ((c & 1) == 0)
                r.push(c);
            return;
        }
        for (let i = (n == 0 ? 1 : 0); i < 10; i++) {
            if (f[i] > 0) {
                f[i]--;
                find(f, c * 10 + i, n + 1, r);
                f[i]++;
            }
        }
    };
    let f = new Array(10).fill(0);
    for (let i of d)
        f[i]++;
    let r = [];
    find(f, 0, 0, r);
    return r;
};
