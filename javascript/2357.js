/**
 * @param {number[]} n
 * @return {number}
 */
var minimumOperations = function (n) {
    let f = new Array(101).fill(false);
    let c = 0;
    for (let i of n) {
        if (i != 0 && !f[i]) {
            f[i] = true;
            c++;
        }
    }
    return c;
};
