let c, n, l, p;

/**
 * @param {string} x
 * @param {number} y
 */
var CombinationIterator = function (x, y) {
    c = x;
    n = c.length;
    l = y;
    p = new Array(l);
    for (let i = 0; i < l; i++)
        p[i] = i;
};

/**
 * @return {string}
 */
CombinationIterator.prototype.next = function () {
    let w = [];
    for (let i = 0; i < l; i++)
        w.push(c[p[i]]);
    let i = l - 1;
    while (i > 0 && p[i] == n - (l - i))
        --i;
    p[i++]++;
    while (i < l) {
        p[i] = p[i - 1] + 1;
        i++;
    }
    return w.join("");
};

/**
 * @return {boolean}
 */
CombinationIterator.prototype.hasNext = function () {
    return p[0] <= n - l;
};

/** 
 * Your CombinationIterator object will be instantiated and called as such:
 * var obj = new CombinationIterator(characters, combinationLength)
 * var param_1 = obj.next()
 * var param_2 = obj.hasNext()
 */
