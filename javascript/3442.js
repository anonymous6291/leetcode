/**
 * @param {string} s
 * @return {number}
 */
var maxDifference = function (s) {
    let n = s.length, f = new Array(26).fill(0);
    for (let i = 0; i < n; i++)
        f[s.codePointAt(i) - 97]++;
    let o = 0, e = n;
    for (let i = 0; i < 26; i++)
        if (f[i] != 0) {
            if (f[i] % 2 == 0)
                e = Math.min(e, f[i]);
            else
                o = Math.max(o, f[i]);
        }
    return o - e;
};
