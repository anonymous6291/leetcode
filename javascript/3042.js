/**
 * @param {string[]} w
 * @return {number}
 */
var countPrefixSuffixPairs = function (w) {
    var isPAS = function (w1, w2) { return (w2.startsWith(w1) && w2.endsWith(w1)) };
    let count = 0, n = w.length;
    for (let i = 1; i < n; i++)
        for (let j = 0; j < i; j++)
            if (isPAS(w[j], w[i]))
                count += 1;
    return count;
};
