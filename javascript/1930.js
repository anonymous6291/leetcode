/**
 * @param {string} st
 * @return {number}
 */
var countPalindromicSubsequence = function (st) {
    var find = function (c, s, n) {
        let e = n - 1;
        while (e > s + 1 && c[e] != c[s])
            --e;
        if (s + 1 == e)
            return 0;
        let un = []
        for (let i = 0; i < 26; i++)
            un[i] = false
        let count = 0;
        for (let i = s + 1; i < e; i++)
            if (!un[c[i]]) {
                un[c[i]] = true;
                ++count;
            }
        return count;
    }
    let count = 0, s = 0, n = st.length;
    const alpha = "abcdefghijklmnopqrstuvwxyz"
    let c = []
    for (let i = 0; i < n; i++)
        c[i] = alpha.indexOf(st[i]);
    let f = []
    for (let i = 0; i < 26; i++)
        f[i] = false
    while (s < n - 2) {
        f[c[s]] = true;
        count += find(c, s, n);
        while (s < n - 2 && f[c[s]])
            ++s;
    }
    return count;
};
