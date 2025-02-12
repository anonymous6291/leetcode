/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumSum = function (nums) {
    const m1 = new Array(82).fill(0);
    const m2 = new Array(82).fill(0)
    let ms = -1;
    for (let i of nums) {
        let s = 0, t = i;
        while (t > 0) {
            s += t % 10;
            t = parseInt(t / 10);
        }
        if (m1[s] < i) {
            m2[s] = m1[s];
            m1[s] = i;
        } else if (m2[s] < i)
            m2[s] = i;
        if (m2[s] != 0)
            ms = Math.max(ms, m1[s] + m2[s]);
    }
    return ms;
};
