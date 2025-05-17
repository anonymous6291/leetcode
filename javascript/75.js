/**
 * @param {number[]} n
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function (n) {
    let a = 0, b = n.length - 1;
    for (let i = 0; i <= b; i++) {
        if (n[i] == 0) {
            n[i] = 1;
            n[a++] = 0;
        } else if (n[i] == 2) {
            n[i--] = n[b];
            n[b--] = 2;
        }
    }
};
