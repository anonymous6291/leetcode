/**
 * @param {number[]} n
 * @param {number} k
 * @param {number} x
 * @return {number[]}
 */
var getSubarrayBeauty = function (n, k, x) {
    let f = new Array(101).fill(0);
    var find = function (x) {
        for (let i = 0; i < 50; i++) {
            x -= f[i];
            if (x < 1)
                return i - 50;
        }
        return 0;
    };
    let l = n.length, r = [];
    for (let i = 0; i < k; i++)
        f[n[i] + 50]++;
    r.push(find(x));
    for (let i = k; i < l; i++) {
        f[n[i - k] + 50]--;
        f[n[i] + 50]++;
        r.push(find(x));
    }
    return r;
};
