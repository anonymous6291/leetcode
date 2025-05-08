/**
 * @param {number[][]} n
 * @return {number}
 */
var numberOfPoints = function (n) {
    let c = new Array(102).fill(0);
    for (let l of n) {
        c[l[0]] += 1;
        c[l[1] + 1] -= 1;
    }
    let p = 0, s = 0;
    for (let i = 0; i < 101; i++) {
        s += c[i];
        if (s != 0)
            p++;
    }
    return p;
};
