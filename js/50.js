/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */
var myPow = function (x, n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    if (n == -1)
        return 1.0 / x;
    let val = myPow(x, parseInt(n / 2));
    if (n % 2 == 0)
        return val * val;
    else {
        if (n < 0)
            return (val * val) / x;
        else
            return x * val * val;
    }
};
