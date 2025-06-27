/**
 * @param {number[]} c
 * @param {number} e
 * @return {boolean[]}
 */
var kidsWithCandies = function (c, e) {
    let m = -1, n = c.length, l = [];
    for (let i = 0; i < n; i++)
        m = Math.max(m, c[i]);
    for (let i = 0; i < n; i++)
        l.push((c[i] + e) >= m);
    return l;
};
