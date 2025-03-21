/**
 * @param {number} n
 * @return {string[]}
 */
var validStrings = function (n) {
    let res = [];
    var find = function (a, i) {
        if (i == n) {
            res.push(a);
            return;
        }
        find(a + "1", i + 1);
        if (i == 0 || a[i - 1] == "1")
            find(a + "0", i + 1);
    };
    find("", 0);
    return res;
};
