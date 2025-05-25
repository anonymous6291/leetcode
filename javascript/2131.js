/**
 * @param {string[]} w
 * @return {number}
 */
var longestPalindrome = function (w) {
    let l = 0, f = [];
    for (let i = 0; i < 26; i++)
        f.push(new Array(26).fill(0));
    for (let s of w) {
        let x = s.codePointAt(0) - 97, y = s.codePointAt(1) - 97;
        if (f[y][x] > 0) {
            l += 4;
            f[y][x]--;
        } else
            f[x][y]++;
    }
    for (let i = 0; i < 26; i++)
        if (f[i][i] > 0)
            return l + 2;
    return l;
};
