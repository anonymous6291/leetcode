/**
 * @param {string} d
 * @return {string[]}
 */
var letterCombinations = function (d) {
    let m = [['a', 'b', 'c'], ['d', 'e', 'f'], ['g', 'h', 'i'],
    ['j', 'k', 'l'],
    ['m', 'n', 'o'], ['p', 'q', 'r', 's'], ['t', 'u', 'v'], ['w', 'x', 'y', 'z']];
    let r = [];
    var find = function (d, i, n, p) {
        if (i == n) {
            r.push(p.join(""));
            return;
        }
        for (let c of m["23456789".indexOf(d[i])]) {
            p[i] = c;
            find(d, i + 1, n, p);
        }
    };
    let n = d.length;
    if (n == 0)
        return [];
    find(d, 0, n, new Array(n));
    return r;
};
