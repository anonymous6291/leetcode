/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var largestValues = function (r) {
    var max = function (i, j) { return i > j ? i : j; };
    var perform = function (r, l, res) {
        if (r == null)
            return;
        if (res.length == l)
            res.push(r.val);
        else
            res[l] = max(res[l], r.val);
        perform(r.left, l + 1, res);
        perform(r.right, l + 1, res);
    };
    var res = [];
    perform(r, 0, res);
    return res;
};
