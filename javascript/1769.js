/**
 * @param {string} b
 * @return {number[]}
 */
var minOperations = function (b) {
    const n = b.length;
    let ps = 0, ss = 0, pbc = 0, sbc = 0;
    for (let i = n - 1; i >= 0; i--) {
        ss += sbc;
        if (b[i] == '1')
            ++sbc;
    }
    const res = []
    for (let i = 0; i < n; i++) {
        res.push(ss + ps);
        if (b[i] == '1') {
            --sbc;
            ++pbc;
        }
        ss -= sbc;
        ps += pbc;
    }
    return res;
};
