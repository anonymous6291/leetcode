/**
 * @param {number} n
 * @param {number} k
 * @return {string}
 */
var getHappyString = function (n, k) {
    const alpha = "0abc"
    var find = function (res, i, n) {
        if (i == n) {
            k--;
            return k == 0;
        }
        for (let c = 1; c < 4; c++)
            if (res[i - 1] != alpha[c]) {
                res[i] = alpha[c];
                if (find(res, i + 1, n))
                    return true;
            }
        return false;
    };
    let res = new Array(n);
    for (let c = 1; c < 4; c++) {
        res[0] = alpha[c];
        if (find(res, 1, n))
            return res.join("");
    }
    return "";
};
