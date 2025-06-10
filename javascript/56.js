/**
 * @param {number[][]} j
 * @return {number[][]}
 */
var merge = function (j) {
    let k = 10001, m = 0;
    for (let i of j) {
        k = Math.min(k, Math.min(i[0], i[1]));
        m = Math.max(m, Math.max(i[0], i[1]));
    }
    m -= k - 1
    let s = new Array(m).fill(0), e = new Array(m).fill(0);
    for (let i of j) {
        s[i[0] - k]++;
        e[i[1] - k]++;
    }
    let l = []
    let p = 0, x = -1;
    for (let i = 0; i < m; i++) {
        p += s[i];
        if (p > 0 && x == -1)
            x = i;
        p -= e[i];
        if (p == 0 && x != -1) {
            l.push([x + k, i + k]);
            x = -1;
        }
    }
    return l;
};
