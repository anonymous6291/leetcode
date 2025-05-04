/**
 * @param {number[][]} d
 * @return {number}
 */
var numEquivDominoPairs = function (d) {
    let f = [];
    for (let i = 0; i < 10; i++)
        f.push(new Array(10).fill(0));
    let r = 0;
    for (let i of d)
        if (i[0] < i[1])
            r += f[i[0]][i[1]]++;
        else
            r += f[i[1]][i[0]]++;
    return r;
};
