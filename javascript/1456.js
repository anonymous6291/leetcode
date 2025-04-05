/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var maxVowels = function (c, k) {
    let v = new Array(26).fill(0);
    v[0] = v[4] = v[8] = v[14] = v[20] = 1;
    let vc = 0, n = c.length;
    for (let i = 0; i < k; i++)
        vc += v[c.codePointAt(i) - 97];
    let mvc = vc;
    for (let i = k; i < n; i++) {
        vc += v[c.codePointAt(i) - 97] - v[c.codePointAt(i - k) - 97];
        if (vc > mvc)
            mvc = vc;
    }
    return mvc;
};
