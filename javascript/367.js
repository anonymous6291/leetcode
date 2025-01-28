/**
 * @param {number} num
 * @return {boolean}
 */
var isPerfectSquare = function (num) {
    let s = 1, e = 46340;
    while (s < e) {
        let m = Math.floor((s + e) / 2);
        let t = m * m;
        if (t == num)
            return true;
        if (t < num)
            s = m + 1;
        else
            e = m - 1;
    }
    return (s * s == num);
};
