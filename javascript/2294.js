/**
 * @param {number[]} n
 * @param {number} k
 * @return {number}
 */
var partitionArray = function (n, k) {
    let s = n[0], e = n[0], p = 0, c = 0;
    for (let i of n) {
        s = Math.min(s, i);
        e = Math.max(e, i);
    }
    e = e - s + 1;
    let f = new Array(e).fill(false);
    for (let i of n)
        f[i - s] = true;
    for (let i = 0; i < e; i++)
        if (f[i] && i - p > k) {
            p = i;
            c++;
        }
    return c + 1;
};
