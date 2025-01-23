/**
 * @param {number} num
 * @return {string}
 */
var convertToBase7 = function (num) {
    if (num == 0)
        return "0"
    let n = num < 0 ? (-num) : num
    let res = []
    while (n > 0) {
        res.push(n % 7)
        n = Math.floor(n / 7)
    }
    if (num < 0)
        res.push("-")
    res.reverse()
    return res.join("")
};
