/**
 * @param {number[]} n
 * @return {number[]}
 */
var separateDigits = function (n) {
    let r = [];
    for (let i of n) {
        let s = 1, t = parseInt(i / 10);
        while (t > 0) {
            s *= 10;
            t = parseInt(t / 10);
        }
        while (s > 0) {
            r.push(parseInt(i / s));
            i %= s;
            s = parseInt(s / 10);
        }
    }
    return r;
};
