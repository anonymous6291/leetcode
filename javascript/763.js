/**
 * @param {string} s
 * @return {number[]}
 */
var partitionLabels = function (s) {
    let res = []
    let n = s.length;
    let pi = new Array(26).fill(0);
    for (let i = n - 1; i >= 0; i--) {
        let t = s.codePointAt(i) - 97;
        if (pi[t] == 0)
            pi[t] = i;
    }
    let pti = 0, cti = 0;
    for (let i = 0; i < n; i++) {
        if (cti < i) {
            res.push(cti - pti + 1);
            pti = i;
        }
        let t = pi[s.codePointAt(i) - 97];
        if (t > cti)
            cti = t;
    }
    res.push(cti - pti + 1);
    return res;
};
