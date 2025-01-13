/**
 * @param {string} s
 * @return {number}
 */
var minimumLength = function (s) {
    const f = new Array(26).fill(0)
    for (let c of s)
        f[c.codePointAt(0) - 97] += 1;
    let count = 0;
    for (let i of f) {
        if (i == 0)
            continue;
        count += (i & 1 ^ 1) << 1 | i & 1;
    }
    return count;
};
