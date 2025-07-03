var f = function (i) {
    let v = 1;
    while (2 * v < i)
        v *= 2;
    return v;
};
const x = "abcdefghijklmnopqrstuvwxyz";
/**
 * @param {number} k
 * @return {character}
 */
var kthCharacter = function (k) {
    if (k == 1)
        return "a";
    return x[kthCharacter(k - f(k)).codePointAt(0) - 96];
};
