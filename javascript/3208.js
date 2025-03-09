/**
 * @param {number[]} colors
 * @param {number} k
 * @return {number}
 */
var numberOfAlternatingGroups = function (colors, k) {
    let n = colors.length, l = n + k, pi = -1, count = 0;
    for (let i = 0; i < k; i++)
        colors.push(colors[i]);
    for (let i = 1; i < l; i++) {
        if (colors[i - 1] == colors[i])
            pi = i - 1;
        else if (i - k == pi)
            pi = -1;
        if (i >= k && pi == -1)
            count++;
    }
    return count;
};
