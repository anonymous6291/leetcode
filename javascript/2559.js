/**
 * @param {string[]} w
 * @param {number[][]} q
 * @return {number[]}
 */
var vowelStrings = function (w, q) {
    let v = new Set(['a', 'e', 'i', 'o', 'u'])
    let psa = [0]
    for (let i = 0; i < w.length; i++)
        psa.push(psa.at(i) + ((v.has(w[i][0]) && v.has(w[i][w[i].length - 1])) ? 1 : 0))
    let res = []
    for (let j of q)
        res.push(psa[j[1] + 1] - psa[j[0]])
    return res
};
