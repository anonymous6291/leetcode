/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfFour = function (n) {
    if (n <= 0)
        return false;
    let z = 0;
    while (n > 0) {
        if ((n & 1) == 1) {
            if (n != 1)
                return false;
            return (z % 2) == 0;
        }
        z++;
        n >>= 1;
    }
    return (z % 2) == 0;
};
