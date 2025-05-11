/**
 * @param {number[]} a
 * @return {boolean}
 */
var threeConsecutiveOdds = function (a) {
    let n = a.length, c = 0;
    for (let i = 0; i < n; i++) {
        if ((a[i] & 1) == 1) {
            c++;
            if (c == 3)
                return true;
        } else
            c = 0;
    }
    return false;
};
