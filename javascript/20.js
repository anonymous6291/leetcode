/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
    let stack = new Array(s.length)
    let i = -1;
    for (let c of s)
        if (c == '(' || c == '{' || c == '[')
            stack[++i] = c;
        else {
            if (i == -1 || (c == ')' && stack[i] != '(') || (c == '}' && stack[i] != '{')
                || (c == ']' && stack[i] != '['))
                return false;
            --i;
        }
    return i == -1;
};
