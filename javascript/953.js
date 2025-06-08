/**
 * @param {string[]} w
 * @param {string} o
 * @return {boolean}
 */
var isAlienSorted = function (w, o) {
    let c = new Array(26).fill(0);
    for (let i = 0; i < 26; i++)
        c[o.codePointAt(i) - 97] = i;
    let s1 = w[0], n = w.length, n1 = s1.length;
    for (let i = 1; i < n; i++) {
        let s2 = w[i], n2 = s2.length, j = 0;
        while (j < n1 && j < n2 && s1[j] == s2[j])
            j++;
        if (j != n1 && j == n2)
            return false;
        while (j < n1)
            if (j == n2 || c[s1.codePointAt(j) - 97] > c[s2.codePointAt(j) - 97])
                return false;
            else if (s1[j] != s2[j++])
                break;
        n1 = n2;
        s1 = s2;
    }
    return true;
};
