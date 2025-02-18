/**
 * @param {string} pattern
 * @return {string}
 */
var smallestNumber = function (p) {
    const nums = "0123456789"
    var find = function (res, p, trav, s, i, n) {
        res[i] = nums[s];
        if (i == n)
            return true;
        while (true) {
            s = s + ((p[i] == 'I') ? 1 : -1);
            if (s < 1 || s > 9)
                return false;
            if (!trav[s]) {
                trav[s] = true;
                if (find(res, p, trav, s, i + 1, n))
                    return true;
                trav[s] = false;
            }
        }
    }
    let n = p.length;
    let res = new Array(n + 1);
    let trav = new Array(10).fill(false)
    for (let i = 1; i <= 9; i++) {
        trav[i] = true;
        if (find(res, p, trav, i, 0, n))
            return res.join("");
        trav[i] = false;
    }
    return "";
};
