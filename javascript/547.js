/**
 * @param {number[][]} ic
 * @return {number}
 */
var findCircleNum = function (ic) {
    var ma = function (ic, i, n, trav) {
        if (trav[i])
            return;
        trav[i] = true;
        for (let j = 0; j < n; j++)
            if (ic[i][j] == 1)
                ma(ic, j, n, trav);
    };
    let n = ic.length, prov = 0;
    let trav = new Array(n).fill(false);
    for (let i = 0; i < n; i++)
        if (!trav[i]) {
            ma(ic, i, n, trav);
            prov++;
        }
    return prov;
};
