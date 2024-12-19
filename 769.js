/**
 * @param {number[]} arr
 * @return {number}
 */
var maxChunksToSorted = function (arr) {
    var maxnum = function (i, j) { return (i > j) ? i : j; };
    var allTrue = function (f, s, e) {
        while (s <= e) {
            if (!f[s])
                return false;
            ++s;
        }
        return true;
    };
    var find = function (arr, i, n, s, f) {
        if (i == n)
            return 0;
        let max = s;
        while (i < n) {
            f[arr[i]] = true;
            max = maxnum(max, arr[i]);
            if (allTrue(f, s, max))
                return 1 + find(arr, i + 1, n, max + 1, f);
            ++i;
        }
        return 1;
    };
    let f = [];
    let n = arr.length;
    for (let i = 0; i < n; i++)
        f[i] = false;
    return find(arr, 0, n, 0, f);
};
