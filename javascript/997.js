/**
 * @param {number} n
 * @param {number[][]} trust
 * @return {number}
 */
var findJudge = function (n, trust) {
    let tc = new Array(n + 1).fill(0)
    for (let i of trust) {
        tc[i[0]] = -10000;
        tc[i[1]]++;
    }
    let judge = -1;
    for (let i = n; i > 0; i--)
        if (tc[i] == n - 1) {
            if (judge != -1)
                return -1;
            judge = i;
        }
    return judge;
};
