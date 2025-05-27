/**
 * @param {number} n
 * @param {number} m
 * @return {number}
 */
var differenceOfSums = function (n, m) {
    let q = parseInt(n / m);
    return (((n + 1) * n) / 2) - (1 + q) * m * q;
};
