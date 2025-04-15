/**
 * @param {number[]} h
 * @return {number}
 */
var trap = function (h) {
    let n = h.length, tw = 0, j = -1;
    let st = new Array(n);
    for (let i = 0; i < n; i++) {
        while (j > 0 && h[st[j]] < h[i]) {
            if (h[st[j - 1]] >= h[st[j]])
                tw += (Math.min(h[st[0]], h[i]) - h[st[j]]) * (st[j] - st[j - 1]);
            j--;
        }
        if (j != -1 && h[st[j]] <= h[i])
            st[j] = i;
        else
            st[++j] = i;
    }
    return tw;
};
