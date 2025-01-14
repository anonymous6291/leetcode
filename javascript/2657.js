/**
 * @param {number[]} A
 * @param {number[]} B
 * @return {number[]}
 */
var findThePrefixCommonArray = function (A, B) {
    let n = A.length, p = 0;
    let C = new Array(n);
    let F = new Array(n + 1).fill(false);
    for (let i = 0; i < n; i++) {
        if (F[A[i]])
            ++p;
        else
            F[A[i]] = true;
        if (F[B[i]])
            ++p;
        else
            F[B[i]] = true;
        C[i] = p;
    }
    return C;
};
