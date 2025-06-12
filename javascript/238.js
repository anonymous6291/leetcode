/**
 * @param {number[]} n
 * @return {number[]}
 */
var productExceptSelf = function (n) {
    let l = n.length, o = -1, p = 1, r = new Array(l).fill(0);
    for (let i = 0; i < l; i++)
        if (n[i] == 0) {
            if (o != -1)
                return r;
            o = i;
        } else
            p *= n[i];
    if (o != -1) {
        r[o] = p;
        return r;
    }
    for (let i = 0; i < l; i++)
        r[i] = parseInt(p / n[i]);
    return r;
};
