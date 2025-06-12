/**
 * @param {string} x
 * @param {string} y
 * @return {boolean}
 */
var checkInclusion = function (x, y) {
    let l = x.length, m = y.length;
    if (l > m)
        return false;
    let i = new Array(26).fill(0), j = new Array(26).fill(0);
    var permutation = function () {
        for (let k = 0; k < 26; k++)
            if (i[k] != j[k])
                return false;
        return true;
    };
    for (let k = 0; k < l; k++) {
        i[x.codePointAt(k) - 97]++;
        j[y.codePointAt(k) - 97]++;
    }
    if (permutation())
        return true;
    for (let k = l; k < m; k++) {
        j[y.codePointAt(k - l) - 97]--;
        j[y.codePointAt(k) - 97]++;
        if (permutation())
            return true;
    }
    return false;
};
