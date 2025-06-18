/**
 * @param {number[]} n
 * @param {number} k
 * @return {number[][]}
 */
var divideArray = function (n, k) {
    n.sort((x, y) => x - y);
    let l = n.length, r = [];
    for (let i = 0; i < l; i += 3) {
        if (n[i + 2] - n[i] > k)
            return [];
        r.push([n[i], n[i + 1], n[i + 2]])
    }
    return r;
};
