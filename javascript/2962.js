/**
 * @param {number[]} n
 * @param {number} k
 * @return {number}
 */
var countSubarrays = function (n, k) {
    let m = n[0], p = 0, c = 0, l = n.length;
    var t = 0;
    for (let i of n)
        if (i > m)
            m = i;
    for (let i = 0; i < l; i++) {
        if (m == n[i])
            c++;
        if (c == k) {
            var x = p;
            while (c == k)
                if (m == n[p++])
                    c--;
            t += (p - x) * (l - i);
        }
    }
    return t;
};
