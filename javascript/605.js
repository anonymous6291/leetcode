/**
 * @param {number[]} f
 * @param {number} n
 * @return {boolean}
 */
var canPlaceFlowers = function (f, n) {
    let l = f.length;
    for (let i = f[0] * 2; i < l && n > 0; i++)
        if (f[i] == 0 && (i == l - 1 || f[i + 1] == 0)) {
            n--;
            i++;
        } else if (f[i] == 1)
            i++;
    return n == 0;
};
