/**
 * @param {number} n
 * @return {number}
 */
var maxProduct = function (n) {
    let x = -1, y = -1;
    while (n > 0) {
        let t = n % 10;
        n = parseInt(n / 10);
        if (t >= x) {
            y = x;
            x = t;
        } else if (t > y)
            y = t;
    }
    return x * y;
};
