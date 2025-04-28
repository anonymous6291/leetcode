/**
 * @param {number[]} n
 * @param {number} k
 * @return {number}
 */
var countSubarrays = function (n, k) {
    var c = 0, s = 0;
    let l = n.length, p = -1;
    for (let i = 0; i < l; i++) {
        s += n[i];
        while ((s * (i - p)) >= k)
            s -= n[++p];
        c += i - p;
    }
    return c;
};
