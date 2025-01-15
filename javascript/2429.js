/**
 * @param {number} n1
 * @param {number} n2
 * @return {number}
 */
var minimizeXor = function (n1, n2) {
    var count1 = function (n) {
        let o = 0;
        while (n > 0) {
            o += n & 1;
            n >>= 1;
        }
        return o;
    };
    let t = count1(n2) - count1(n1), c = 1;
    while (t != 0) {
        if ((n1 & c) == c && t < 0) {
            n1 ^= c;
            ++t;
        } else if ((n1 & c) != c && t > 0) {
            n1 |= c;
            --t;
        }
        c <<= 1;
    }
    return n1;
};
