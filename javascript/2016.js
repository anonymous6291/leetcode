/**
 * @param {number[]} n
 * @return {number}
 */
var maximumDifference = function (n) {
    let p = n[0], l = n.length, m = -1;
    for (let i = 1; i < l; i++)
        if (p < n[i])
            m = Math.max(m, n[i] - p);
        else
            p = n[i];
    return m;
};
