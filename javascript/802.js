/**
 * @param {number[][]} g
 * @return {number[]}
 */
var eventualSafeNodes = function (g) {
    var find = function (g, i, pter, trav) {
        if (trav[i])
            return pter[i];
        trav[i] = true;
        for (let j of g[i])
            if (!find(g, j, pter, trav))
                return false;
        pter[i] = true;
        return true;
    };
    let n = g.length;
    let pter = new Array(n).fill(false);
    let trav = new Array(n).fill(false);
    let res = []
    for (let i = 0; i < n; i++)
        if (find(g, i, pter, trav))
            res.push(i);
    return res;
};
