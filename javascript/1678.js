/**
 * @param {string} c
 * @return {string}
 */
var interpret = function (c) {
    let n = c.length, i = 0, r = "";
    for (let j = 0; j < n; j++) {
        if (c[j] == 'G')
            r += 'G';
        else if (c[j + 1] == ')') {
            r += 'o';
            j++;
        } else {
            r += "al";
            j += 3;
        }
    }
    return r;
};
