/**
 * @param {string[]} w
 * @param {number[]} g
 * @return {string[]}
 */
var getLongestSubsequence = function (w, g) {
    let r = [];
    r.push(w[0]);
    let n = w.length;
    for (let i = 1; i < n; i++)
        if (g[i - 1] != g[i])
            r.push(w[i]);
    return r;
};
