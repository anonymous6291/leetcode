/**
 * @param {number} z
 * @return {string[][]}
 */
var solveNQueens = function (z) {
    let b = []
    let c = new Array(z).fill(false)
    let p = []
    let a = []
    for (let i = 0; i < z; i++) {
        b.push(new Array(z).fill('.'));
        p.push(new Array(2).fill(0));
    }

    var diagonal = function (a, b) {
        if (a == b)
            return true;
        if ((a + b) == 0)
            return true;
        return false;
    };

    var find = function (i) {
        if (i == z) {
            let l = []
            for (let k of b)
                l.push(k.join(""))
            a.push(l);
            return;
        }
        for (let j = 0; j < z; j++)
            if (!c[j]) {
                let Q = true;
                for (let k = 0; k < i; k++)
                    if (diagonal(p[k][0] - i, p[k][1] - j)) {
                        Q = false;
                        break;
                    }
                if (Q) {
                    c[j] = true;
                    b[i][j] = 'Q';
                    p[i][0] = i;
                    p[i][1] = j;
                    find(i + 1);
                    c[j] = false;
                    b[i][j] = '.';
                }
            }
    };
    find(0)
    return a
};
