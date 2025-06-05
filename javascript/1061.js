/**
 * @param {string} x
 * @param {string} y
 * @param {string} b
 * @return {string}
 */
var smallestEquivalentString = function (x, y, b) {
    let c = [];
    for (let i = 0; i < 26; i++)
        c.push(i);
    var find = function (i) {
        if (c[i] == i)
            return c[i];
        c[i] = find(c[i]);
        return c[i];
    };
    let n = x.length;
    for (let i = 0; i < n; i++) {
        let g = find(x.codePointAt(i) - 97), h = find(y.codePointAt(i) - 97);
        if (g < h)
            c[h] = g;
        else
            c[g] = h;
    }
    let r = [];
    let k = "abcdefghijklmnopqrstuvwxyz";
    for (let i of b)
        r.push(k[find(i.codePointAt(0) - 97)]);
    return r.join("");
};
