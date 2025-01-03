/**
 * @param {number[][]} tri
 * @return {number}
 */
var minimumTotal = function (tri) {
    var min = function (i, j) { return (i < j) ? i : j; };
    var find = function (tri, i, j, mins) {
        if (i == tri.length - 1)
            return tri[i][j];
        let m1 = (j != 0) ? (mins[i + 1]) : (find(tri, i + 1, j, mins));
        let m2 = find(tri, i + 1, j + 1, mins);
        mins[i + 1] = m2;
        return min(m1, m2) + tri[i][j];
    };
    return find(tri, 0, 0, [])
};
