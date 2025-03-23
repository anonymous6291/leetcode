/**
 * @param {string[]} q
 * @param {string[]} w
 * @return {number[]}
 */
var numSmallerByFrequency = function (q, w) {
    var f = function (s) {
        let freq = new Array(26).fill(0);
        for (let i of s)
            freq[i.codePointAt(0) - 97]++;
        for (let i of freq)
            if (i != 0)
                return i;
        return 0;
    };
    let freq = new Array(12).fill(0);
    for (let i of w) {
        let t = f(i)
        while (t >= 0)
            freq[t--]++;
    }
    let res = []
    for (let i of q)
        res.push(freq[f(i) + 1]);
    return res;
};
