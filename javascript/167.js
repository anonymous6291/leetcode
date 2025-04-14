/**
 * @param {number[]} n
 * @param {number} t
 * @return {number[]}
 */
var twoSum = function (n, t) {
    let s = 0, e = n.length - 1;
    while (s < e) {
        if (n[s] + n[e] == t)
            return [s + 1, e + 1];
        if (n[s] + n[e] < t)
            s++;
        else
            e--;
    }
    return null;
};
