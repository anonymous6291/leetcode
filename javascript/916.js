/**
 * @param {string[]} w1
 * @param {string[]} w2
 * @return {string[]}
 */
var wordSubsets = function (w1, w2) {
    const alpha = "abcdefghijklmnopqrstuvwxyz"

    var max = function (i, j) { return (i > j) ? i : j; };

    var check = function (ar, c) {
        for (let i = 0; i < 26; i++)
            if (ar[i] < c[i])
                return false;
        return true;
    };

    let c = new Array(26).fill(0)
    for (let s of w2) {
        let ar = new Array(26).fill(0)
        for (let t of s) {
            const tt = alpha.indexOf(t)
            c[tt] = max(c[tt], ++ar[tt]);
        }
    }
    let res = []
    for (let s of w1) {
        let ar = new Array(26).fill(0)
        for (let t of s)
            ++ar[alpha.indexOf(t)];
        if (check(ar, c))
            res.push(s);
    }
    return res;
};
