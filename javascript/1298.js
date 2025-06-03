/**
 * @param {number[]} s
 * @param {number[]} c
 * @param {number[][]} k
 * @param {number[][]} b
 * @param {number[]} i
 * @return {number}
 */
var maxCandies = function (s, c, k, b, i) {
    let n = s.length;
    let p = new Array(n).fill(false);
    let v = new Array(n).fill(false);
    var traverse = function (j) {
        if (s[j] == 0) {
            p[j] = true;
            return 0;
        }
        if (v[j])
            return 0;
        v[j] = true;
        let r = c[j];
        for (let m of k[j]) {
            s[m] = 1;
            if (p[m])
                r += traverse(m);
        }
        for (let m of b[j])
            r += traverse(m);
        return r;
    };
    let r = 0;
    for (let j of i)
        r += traverse(j);
    return r;
};
