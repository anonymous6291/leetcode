/**
 * @param {number[]} n
 * @param {number} v
 * @param {number} d
 * @return {number[]}
 */
var findKDistantIndices = function (n, v, d) {
    let l = n.length, s = [], k = 0, r = [];
    for (let j = 0; j < l; j++)
        if (n[j] == v)
            s.push(j);
    let i = s.length;
    for (let j = 0; j < l; j++) {
        if (k == i)
            return r;
        if (s[k] < j && j - s[k] > d)
            k++;
        if (k < i && Math.abs(j - s[k]) <= d)
            r.push(j);
    }
    return r;
};
