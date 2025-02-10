/**
 * @param {string} s
 * @return {string}
 */
var clearDigits = function (s) {
    var stack = []
    for (let i of s)
        if (isNaN(i))
            stack.push(i)
        else
            stack.pop()
    return stack.join("")
};
