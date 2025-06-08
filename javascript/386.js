/**
 * @param {number} n
 * @return {number[]}
 */
var lexicalOrder = function (n) {
    let l = [];
    var find = function (i) {
        for (let j = 0; j < 10; j++, i++) {
            if (i > n)
                return;
            l.push(i);
            find(i * 10);
        }
    };
    let e = Math.min(9, n);
    for (let s = 1; s <= e; s++) {
        l.push(s);
        find(s * 10, l, n);
    }
    return l;
};
