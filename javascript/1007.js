/**
 * @param {number[]} t
 * @param {number[]} b
 * @return {number}
 */
var minDominoRotations = function (t, b) {
    var find = function (t, b, v) {
        let ts = 0, bs = 0, n = t.length;
        for (let i = 0; i < n; i++) {
            if (t[i] == v)
                ts++;
            if (b[i] == v)
                bs++;
            else if (t[i] != v)
                return -1;
        }
        return Math.min(Math.min(ts, bs), n - Math.max(ts, bs));
    };
    let r = t.length;
    for (let i = 1; i < 7; i++) {
        let v = find(t, b, i);
        if (v != -1)
            r = Math.min(r, v);
    }
    if (r == t.length)
        return -1;
    return r;
};
