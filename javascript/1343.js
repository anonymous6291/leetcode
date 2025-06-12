/**
 * @param {number[]} n
 * @param {number} k
 * @param {number} t
 * @return {number}
 */
var numOfSubarrays = function (n, k, t) {
    let l = n.length, p = 0, c = 0;
    t *= k;
    for (let i = 0; i < k; i++)
        p += n[i];
    if (p >= t)
        c++;
    for (let i = k; i < l; i++) {
        p = p - n[i - k] + n[i];
        if (p >= t)
            c++;
    }
    return c;
};
