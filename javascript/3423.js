/**
 * @param {number[]} n
 * @return {number}
 */
var maxAdjacentDistance = function (n) {
    let l = n.length, m = Math.abs(n[0] - n[l - 1]);
    for (let i = 1; i < l; i++)
        m = Math.max(m, Math.abs(n[i] - n[i - 1]));
    return m;
};
