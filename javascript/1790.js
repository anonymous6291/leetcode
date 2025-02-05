/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */
var areAlmostEqual = function (s1, s2) {
    let s = 0, n = s1.length;
    while (s < n && s1[s] == s2[s])
        ++s;
    if (s == n)
        return true;
    let e = n - 1;
    while (s1[e] == s2[e])
        --e;
    if (s1[s] != s2[e] || s1[e] != s2[s])
        return false;
    ++s;
    while (s < e) {
        if (s1[s] != s2[s])
            return false;
        ++s;
    }
    return true;
};
