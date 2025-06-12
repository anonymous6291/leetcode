/**
 * @param {number[]} n
 * @param {number} k
 * @return {number}
 */
var maximumSubarraySum = function (n, k) {
    var p = 0, m = 0;
    let f = new Array(100001).fill(false), l = n.length, s = 0;
    for (let i = 0; i < l; i++) {
        while (f[n[i]]) {
            f[n[s]] = false;
            p -= n[s++];
        }
        f[n[i]] = true;
        p += n[i];
        if (i - s + 1 == k) {
            m = Math.max(m, p);
            f[n[s]] = false;
            p -= n[s++];
        }
    }
    if (l - s == k)
        return Math.max(p, m);
    return m;
};
