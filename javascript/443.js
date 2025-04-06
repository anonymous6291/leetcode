/**
 * @param {character[]} c
 * @return {number}
 */
var compress = function (c) {
    var len = function (i) {
        let l = 0;
        while (i > 0) {
            l++;
            i = parseInt(i / 10);
        }
        return l;
    };
    const alpha = "0123456789";
    let n = c.length, j = 0, f = 1, t = c[0];
    for (let i = 1; i < n; i++) {
        if (c[i] != t) {
            c[j++] = t;
            if (f != 1) {
                let l1 = len(f), l2 = l1;
                while (f > 0) {
                    c[j + --l1] = alpha[f % 10];
                    f = parseInt(f / 10);
                }
                j += l2;
            }
            t = c[i];
            f = 1;
        } else
            f++;
    }
    c[j++] = t;
    if (f != 1) {
        let l1 = len(f), l2 = l1;
        while (f > 0) {
            c[j + --l1] = alpha[f % 10];
            f = parseInt(f / 10);
        }
        j += l2;
    }
    return j;
};
