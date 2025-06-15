/**
 * @param {number} n
 * @return {number}
 */
var maxDiff = function (n) {
    var len = function (n) {
        let l = 0;
        while (n > 0) {
            l++;
            n = parseInt(n / 10);
        }
        return l;
    };
    var ft = function (d, x, y) {
        let l = d.length;
        for (let i = 0; i < l; i++)
            if (d[i] != x && d[i] != y)
                return i;
        return -1;
    };
    var rac = function (d, o, n) {
        let l = d.length, v = 0;
        for (let i = 0; i < l; i++)
            v = v * 10 + (d[i] == o ? n : d[i]);
        return v;
    };
    let l = len(n), d = new Array(l).fill(0);
    for (let i = l - 1, t = n; i >= 0; i--, t = parseInt(t / 10))
        d[i] = t % 10;
    let i = ft(d, -1, 9), e = i == -1 ? n : rac(d, d[i], 9);
    i = ft(d, 0, 1);
    return e - (i == -1 ? n : rac(d, d[i], i == 0 ? 1 : 0));
};
