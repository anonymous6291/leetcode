/**
 * @param {number[]} temperatures
 * @return {number[]}
 */
var dailyTemperatures = function (temp) {
    let n = temp.length, ind = -1;
    let s = []
    let res = []
    for (let i = n - 1; i >= 0; --i) {
        while (ind >= 0 && temp[i] >= temp[s[ind]])
            --ind;
        if (ind < 0)
            res[i] = 0;
        else
            res[i] = s[ind] - i;
        s[++ind] = i;
    }
    return res;
};
