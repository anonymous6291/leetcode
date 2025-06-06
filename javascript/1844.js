/**
 * @param {string} s
 * @return {string}
 */
var replaceDigits = function (s) {
    let n = s.length;
    let r = [];
    let x = "abcdefghijklmnopqrstuvwxyz";
    for (let i = 0; i < n; i += 2) {
        r.push(s.charAt(i));
        if (i + 1 < n)
            r.push(x[s.codePointAt(i) + s.codePointAt(i + 1) - 145]);
    }
    return r.join("");
};
