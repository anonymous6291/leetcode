/**
 * @param {string} key
 * @param {string} message
 * @return {string}
 */
var decodeMessage = function (key, message) {
    const tf = new Array(26).fill(0);
    let n = key.length
    const alpha = "abcdefghijklmnopqrstuvwxyz"
    let s = 0;
    for (let i = 0; i < n; i++) {
        let t = key.codePointAt(i) - 97;
        if (t > -1 && tf[t] == 0)
            tf[t] = alpha[s++];
    }
    n = message.length
    const res = new Array(n)
    for (let i = 0; i < n; i++)
        if (message[i] != ' ')
            res[i] = tf[message.codePointAt(i) - 97];
        else
            res[i] = ' '
    return res.join("");
};
