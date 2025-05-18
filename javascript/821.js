/**
 * @param {string} w
 * @param {character} c
 * @return {number[]}
 */
var shortestToChar = function (w, c) {
    var abs = function (i) {
        return (i < 0) ? -i : i;
    };
    let n = w.length;
    let r = [];
    let p = [];
    let k = 0;
    for (let j = 0; j < n; j++)
        if (w[j] == c)
            p.push(j);
    for (let j = 0; j < n; j++) {
        if (k + 1 < p.length && abs(p[k] - j) > abs(p[k + 1] - j))
            k++;
        r.push(abs(p[k] - j));
    }
    return r;
};
