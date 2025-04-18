/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */
var checkIfCanBreak = function (s1, s2) {
    let f = new Array(26).fill(0);
    for (let i = s1.length - 1; i >= 0; i--) {
        f[s1.codePointAt(i) - 97]++;
        f[s2.codePointAt(i) - 97]--;
    }
    let p1 = 0, p2 = 0, f1 = true, f2 = true;
    for (let i = 0; i < 26; i++) {
        p1 += f[i];
        p2 -= f[i];
        if (p1 < 0)
            f1 = false;
        if (p2 < 0)
            f2 = false;
    }
    return f1 || f2;
};
