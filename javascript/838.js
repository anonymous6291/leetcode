/**
 * @param {string} d
 * @return {string}
 */
var pushDominoes = function (d) {
    let c = [];
    for (let i of d)
        c.push(i);
    let n = c.length, i = 0;
    while (i < n) {
        if (c[i] == 'L') {
            let t = i - 1;
            i++;
            while (t >= 0 && c[t] == '.')
                c[t--] = 'L';
        } else if (c[i] == 'R') {
            let t = i + 1;
            while (t < n && c[t] == '.')
                t++;
            if (t == n || c[t] == 'R') {
                while (i < t)
                    c[i++] = 'R';
                i = t;
            } else if (c[t] == 'L') {
                let l = i + ((t - i + 1) >> 1);
                let k = i;
                while (i < l)
                    c[i++] = 'R';
                if (((t - k) % 2) == 0)
                    l++;
                while (l < t)
                    c[l++] = 'L';
                i = t + 1;
            } else
                i = t;
        } else
            i++;
    }
    return c.join("");
};
