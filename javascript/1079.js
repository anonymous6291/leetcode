/**
 * @param {string} tiles
 * @return {number}
 */
var numTilePossibilities = function (tiles) {
    var count = function (c, trav, n) {
        let cc = 0;
        for (let i = 0; i < n; i++)
            if (!trav[i]) {
                trav[i] = true;
                cc += count(c, trav, n) + 1;
                trav[i] = false;
                let t = i;
                while (i < n && c[t] == c[i])
                    ++i;
                --i;
            }
        return cc;
    };
    let c = []
    for (let i of tiles)
        c.push(i)
    c.sort()
    let n = c.length;
    let trav = new Array(n).fill(false)
    return count(c, trav, n);
};
