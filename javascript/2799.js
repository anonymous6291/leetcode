/**
 * @param {number[]} n
 * @return {number}
 */
var countCompleteSubarrays = function (n) {
    let d = 0, l = n.length, c = 0, t = 0, p = 0;
    let f = new Array(2001).fill(false);
    let o = new Array(2001).fill(0);
    for (let i = 0; i < l; i++)
        if (!f[n[i]]) {
            d++;
            f[n[i]] = true;
        }
    for (let i = 0; i < l; i++) {
        if (o[n[i]] == 0)
            c++;
        o[n[i]]++;
        let u = p;
        while (c >= d) {
            o[n[p]]--;
            if (o[n[p]] == 0)
                c--;
            p++;
            if (c < d) {
                t += (p - u) * (l - i);
                break;
            }
        }
    }
    return t;
};
