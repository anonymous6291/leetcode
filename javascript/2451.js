/**
 * @param {string[]} w
 * @return {string}
 */
var oddString = function (w) {
    var make = function (s, d) {
        let n = s.length - 1;
        for (let i = 0; i < n; i++)
            d[i] = s.codePointAt(i) - s.codePointAt(i + 1);
    };
    var eqd = function (d1, d2) {
        let n = d1.length - 1;
        while (n >= 0)
            if (d1[n] != d2[n--])
                return false;
        return true;
    };
    let n = w[0].length - 1, l = w.length, d1 = new Array(n).fill(0), d2 = new Array(n).fill(0);
    make(w[0], d1);
    make(w[1], d2);
    if (!eqd(d1, d2)) {
        let d3 = new Array(n).fill(0);
        make(w[2], d3);
        return w[eqd(d1, d3) ? 1 : 0];
    }
    for (let i = 2; i < l; i++) {
        make(w[i], d2);
        if (!eqd(d1, d2))
            return w[i];
    }
    return "";
};
