/**
 * @param {number[]} prices
 * @return {number[]}
 */
var finalPrices = function (p) {
    let n = p.length;
    for (let i = 0; i < n; i++)
        for (let j = i + 1; j < n; j++)
            if (p[j] <= p[i]) {
                p[i] -= p[j];
                break;
            }
    return p;
};
