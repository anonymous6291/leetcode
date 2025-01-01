/**
 * @param {string} s
 * @return {number}
 */
var maxScore = function (c) {
    var max = function (i, j) {
        return (i > j) ? i : j;
    };
    let n = c.length, r = 0, l = (c[0] == '0' ? 1 : 0);
    for (let i = 1; i < n; i++)
        if (c[i] == '1')
            ++r;
    let maxs = r + l;
    --n;
    for (let i = 1; i < n; i++)
        if (c[i] == '0') {
            ++l;
            maxs = max(maxs, r + l);
        } else
            --r;
    return maxs;
};
