/**
 * @param {number[]} values
 * @return {number}
 */
var maxScoreSightseeingPair = function (val) {
    let p = 0, n = val.length, max = -1;
    for (let i = 1; i < n; i++) {
        let t = val[p] + val[i] + p - i;
        if (t > max)
            max = t;
        if (2 * val[i] >= t)
            p = i;
    }
    return max;
};
