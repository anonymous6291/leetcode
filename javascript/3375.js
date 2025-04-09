/**
 * @param {number[]} n
 * @param {number} k
 * @return {number}
 */
var minOperations = function (n, k) {
    let f = new Array(101).fill(false);
    let c = 0;
    for (let i = n.length - 1; i >= 0; i--) {
        if (n[i] < k)
            return -1;
        f[n[i]] = true;
    }
    for (let i = 100; i > k; i--)
        if (f[i])
            c++;
    return c;
};
