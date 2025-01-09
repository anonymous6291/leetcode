/**
 * @param {string[]} w
 * @param {string} p
 * @return {number}
 */
var prefixCount = function (w, p) {
    let count = 0;
    for (let s of w)
        if (s.startsWith(p))
            ++count;
    return count;
};
