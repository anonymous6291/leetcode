/**
 * @param {number[]} r
 * @return {number}
 */
var numRabbits = function (r) {
    let c = 0, n = r.length;
    let f = new Array(1000).fill(0);
    for (let i = 0; i < n; i++)
        if (f[r[i]] > 0)
            f[r[i]]--;
        else {
            c += r[i] + 1;
            f[r[i]] = r[i];
        }
    return c;
};
