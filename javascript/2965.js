/**
 * @param {number[][]} g
 * @return {number[]}
 */
var findMissingAndRepeatedValues = function (g) {
    let n = g.length, rep = -1;
    let f = new Array(n * n + 1).fill(true);
    for (i of g)
        for (j of i)
            if (f[j])
                f[j] = false;
            else
                rep = j;
    for (let i = n * n; i >= 0; i--)
        if (f[i])
            return [rep, i];
    return null;
};
