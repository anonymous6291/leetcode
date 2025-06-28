/**
 * @param {number[]} n
 * @param {number} k
 * @return {number}
 */
var findMaxAverage = function (n, k) {
    let l = n.length, s = 0;
    for (let i = 0; i < k; i++)
        s += n[i];
    let m = s;
    for (let i = k; i < l; i++) {
        s = s - n[i - k] + n[i];
        m = Math.max(m, s);
    }
    return m / k;
};
