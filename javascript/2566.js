/**
 * @param {number} n
 * @return {number}
 */
var minMaxDifference = function (n) {
    let t = n, l = 0;
    while (t > 0) {
        l++;
        t = parseInt(t / 10);
    }
    let d = new Array(l).fill(0);
    t = n;
    let s = 0, e = 0, y = -1;
    for (let i = l - 1; i >= 0; i--, t = parseInt(t / 10)) {
        d[i] = t % 10;
        if (d[i] != 9)
            y = d[i];
    }
    let x = d[0];
    for (let i = 0; i < l; i++) {
        if (x == d[i])
            s *= 10;
        else
            s = s * 10 + d[i];
        if (y == d[i])
            e = e * 10 + 9;
        else
            e = e * 10 + d[i];
    }
    return e - s;
};
