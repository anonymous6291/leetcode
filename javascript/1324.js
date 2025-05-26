/**
 * @param {string} w
 * @return {string[]}
 */
var printVertically = function (w) {
    let c = 1, m = 0, n = w.length, p = 0;
    for (let i = 0; i < n; i++)
        if (w[i] == ' ') {
            m = Math.max(m, i - p);
            p = i + 1;
            c++;
        }
    m = Math.max(n - p, m);
    let r = [];
    for (let i = 0; i < m; i++)
        r.push(new Array(c).fill(' '));
    let i = 0;
    for (let j = 0; j < c; j++) {
        for (let k = 0; k < m; k++)
            if (i < n && w[i] != ' ')
                r[k][j] = w[i++];
        i++;
    }
    let t = [];
    for (let u of r) {
        let x = c - 1;
        while (x >= 0 && u[x] == ' ')
            x--;
        let y = "";
        while (x >= 0)
            y = u[x--] + y;
        t.push(y)
    }
    return t;
};
