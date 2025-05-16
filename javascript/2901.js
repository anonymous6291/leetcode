/**
 * @param {string[]} w
 * @param {number[]} g
 * @return {string[]}
 */
var getWordsInLongestSubsequence = function (w, g) {
    var validHam = function (i, j) {
        if (i.length != j.length)
            return false;
        let n = i.length, f = false;
        for (let k = 0; k < n; k++)
            if (i[k] != j[k]) {
                if (f)
                    return false;
                f = true;
            }
        return true;
    };
    var find = function (a, g, i, n, l) {
        if (i == n)
            return;
        let t = l[i];
        t.push(a[i]);
        find(a, g, i + 1, n, l);
        let p = []
        for (let k = i + 1; k < n; k++)
            if (g[i] != g[k] && validHam(a[i], a[k]) && p.length < l[k].length)
                p = l[k];
        for (let k of p)
            t.push(k);
    };
    let n = w.length;
    let d = [];
    for (let i = 0; i < n; i++)
        d.push([]);
    find(w, g, 0, n, d);
    t = d[0]
    for (let k of d)
        if (t.length < k.length)
            t = k;
    return t;
};
