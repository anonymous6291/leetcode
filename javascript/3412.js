/**
 * @param {string} s
 * @return {number}
 */
var calculateScore = function (s) {
    let n = s.length;
    let stack = [];
    for (let i = 0; i < 26; i++)
        stack.push([]);
    var sum = 0;
    for (let i = 0; i < n; i++) {
        let t = s.codePointAt(i) - 97;
        if (stack[25 - t].length == 0)
            stack[t].push(i);
        else
            sum += i - stack[25 - t].pop();
    }
    return sum;
};
