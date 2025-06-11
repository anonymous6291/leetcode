/**
 * @param {string[]} s
 * @return {number}
 */
var maximumValue = function (s) {
    var find = function (s) {
        let n = s.length, v = 0;
        for (let i = 0; i < n; i++) {
            let t = s.codePointAt(i) - 48;
            if (t > 9)
                return n;
            v = v * 10 + t;
        }
        return v;
    };
    let m = 0;
    for (let t of s)
        m = Math.max(m, find(t));
    return m;
};
