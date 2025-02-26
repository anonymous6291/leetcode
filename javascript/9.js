/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
    if (x < 0)
        return false;
    var v = x, r = 0;
    while (v > 0) {
        r = r * 10 + (v % 10);
        v = parseInt(v / 10);
    }
    return x == r;
};
