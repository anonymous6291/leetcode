/**
 * @param {string} c
 * @param {number[][]} sh
 * @return {string}
 */
var shiftingLetters = function (c, sh) {
    const alpha = "abcdefghijklmnopqrstuvwxyz";
    let n1 = c.length, n2 = sh.length, ps = 0;
    const ch = new Array(n1 + 1).fill(0);
    for (let i of sh) {
        ch[i[0]] += i[2] * 2 - 1;
        ch[i[1] + 1] += -(i[2] * 2 - 1);
    }
    const res = [];
    for (let i = 0; i < n1; i++) {
        ps += ch[i];
        res.push(alpha[(alpha.indexOf(c[i]) + (ps % 26) + 26) % 26]);
    }
    return res.join("");
};
