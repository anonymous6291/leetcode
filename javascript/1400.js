/**
 * @param {string} s
 * @param {number} k
 * @return {boolean}
 */
var canConstruct = function (s, k) {
    if (s.length < k)
        return false;
    let f = new Array(26).fill(0)
    for (let i = 0; i < s.length; i++)
        f[s.codePointAt(i) - 97]++;
    for (let i = 0; i < 26; i++)
        k -= f[i] % 2;
    return k >= 0;
};
