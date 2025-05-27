/**
 * @param {number[]} n1
 * @param {number[]} n2
 * @param {number[]} n2
 * @return {number[]}
 */
var twoOutOfThree = function (n1, n2, n3) {
    let f = new Array(101).fill(0);
    for (let i of n1)
        f[i] = 0b1;
    for (let i of n2)
        f[i] = f[i] | 0b10;
    for (let i of n3)
        f[i] = f[i] | 0b100;
    let l = [];
    for (let i = 0; i < 101; i++)
        if (f[i] != 0 && f[i] != 1 && f[i] != 2 && f[i] != 4)
            l.push(i);
    return l;
};
