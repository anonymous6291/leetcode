/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
    let n = s.length, p = 0, l = 0, m = new Array(128).fill(-1);
    for (let i = 0; i < n; i++) {
        p = Math.max(p, m[s.codePointAt(i)] + 1);
        m[s.codePointAt(i)] = i;
        l = Math.max(l, i - p + 1);
    }
    return l;
};
