/**
 * @param {number[][]} grid
 * @param {number} x
 * @return {number}
 */
var minOperations = function (grid, x) {
    let arr = []
    let freq = new Array(10001).fill(0)
    for (let i of grid)
        for (let j of i)
            freq[j]++;
    for (let i = 0, k = 0; i < 10001; i++)
        while (freq[i]-- > 0)
            arr.push(i)
    let mid = arr[(grid.length * grid[0].length) >> 1], count = 0;
    for (let i of arr) {
        if ((i - mid) % x != 0)
            return -1;
        count += Math.abs(i - mid) / x;
    }
    return count;
};
