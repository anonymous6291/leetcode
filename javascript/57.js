/**
 * @param {number[][]} i
 * @param {number[]} j
 * @return {number[][]}
 */
var insert = function (i, j) {
    var intersect = function (i, j) {
        if (i[0] > j[0])
            return intersect(j, i);
        return i[1] >= j[0];
    };
    let n = i.length, m = 0, d = false;
    for (let k = 0; k < n; k++) {
        if (intersect(i[k], j)) {
            let s = Math.min(i[k][0], j[0]);
            while (k < n && i[k][0] <= j[1])
                k++;
            i[m++] = [s, Math.max(i[--k][1], j[1])];
            d = true;
        } else
            i[m++] = i[k];
    }
    if (!d) {
        let r = [];
        for (let k = 0; k < n;) {
            if (!d && i[k][0] > j[0]) {
                r.push(j);
                d = true;
            } else
                r.push(i[k++]);
        }
        if (!d)
            r.push(j);
        return r;
    }
    let r = []
    for (let k = 0; k < m; k++)
        r.push(i[k]);
    return r;
};
