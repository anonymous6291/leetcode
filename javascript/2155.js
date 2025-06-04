/**
 * @param {number[]} n
 * @return {number[]}
 */
var maxScoreIndices = function (n) {
    let r = 0, l = 0, q = n.length, m = -1;
    let v = [];
    for (let i of n)
        r += i;
    for (let i = 0; i < q; i++) {
        if (r + l > m) {
            m = l + r;
            v = [];
        }
        if (r + l >= m)
            v.push(i);
        l += 1 - n[i];
        r -= n[i];
    }
    if (r + l > m) {
        m = l + r;
        v = [];
    }
    if (r + l >= m)
        v.push(q);
    return v;
};
