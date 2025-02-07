/**
 * @param {number} l
 * @param {number[][]} q
 * @return {number[]}
 */
var queryResults = function (l, q) {
    let n = q.length;
    let res = new Array(n);
    const m1 = new Map();
    const m2 = new Map();
    for (let i = 0; i < n; i++) {
        let a = q[i][0], b = q[i][1];
        let r1 = m1.get(a);
        if (r1 == undefined || r1 != b) {
            if (r1 != undefined) {
                let r2 = m2.get(r1);
                if (r2 > 1)
                    m2.set(r1, r2 - 1);
                else
                    m2.delete(r1);
            }
            m1.set(a, b);
            r1 = m2.get(b);
            m2.set(b, (r1 == undefined ? 0 : r1) + 1);
        }
        res[i] = m2.size;
    }
    return res;
};
