/**
 * @param {number} s
 * @return {number}
 */
var totalNQueens = function (s) {
    let c = new Array(s).fill(false);
    let r = new Array(2 * s).fill(false);
    let l = new Array(2 * s).fill(false);
    var count = function (i) {
        if (i == s)
            return 1;
        let q = 0;
        for (let j = 0; j < s; j++)
            if (!(c[j] || r[i + j] || l[s - i + j])) {
                c[j] = true;
                r[i + j] = true;
                l[s - i + j] = true;
                q += count(i + 1, s, c, r, l);
                c[j] = false;
                r[i + j] = false;
                l[s - i + j] = false;
            }
        return q;
    };
    return count(0);
};
