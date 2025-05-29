/**
 * @param {number} c
 * @return {string}
 */
var convertToTitle = function (c) {
    let s = [];
    let x = "ZABCDEFGHIJKLMNOPQRSTUVWXY";
    while (c > 0) {
        s.push(x[c % 26]);
        c = parseInt((c - 1) / 26);
    }
    return s.reverse().join("");
};
