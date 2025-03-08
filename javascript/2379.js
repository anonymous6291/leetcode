/**
 * @param {string} blocks
 * @param {number} k
 * @return {number}
 */
var minimumRecolors = function (blocks, k) {
    let s = 0, e = 0, w = 0, n = blocks.length;
    while (e < k)
        if (blocks[e++] == 'W')
            w++;
    let minw = w;
    while (e < n) {
        if (blocks[e++] == 'W')
            w++;
        if (blocks[s++] == 'W')
            w--;
        if (w < minw)
            minw = w;
    }
    return minw;
};
