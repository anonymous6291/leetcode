/**
 * @param {number} n
 * @param {number} k
 * @return {string}
 */
var getPermutation = function (n, k) {
    var fact = function (n) {
        if (n == 0)
            return 1;
        return n * fact(n - 1);
    };
    let res = []
    let taken = new Array(9).fill(false);
    let cp = fact(n - 1), d = n - 1;
    for (let i = 0; i < n; i++) {
        let j = 1;
        while (cp < k) {
            j++;
            k -= cp;
        }
        let l = -1;
        while (j > 0)
            if (!taken[++l])
                j--;
        taken[l] = true;
        res.push(l + 1);
        if (d != 0)
            cp /= d;
        d--;
    }
    return res.join("");
};
