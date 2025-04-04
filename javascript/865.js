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
 * @return {TreeNode}
 */
let t;
let d;
var traverse = function (rt, h) {
    if (rt == null)
        return h;
    let l = traverse(rt.left, h + 1);
    let r = traverse(rt.right, h + 1);
    if (l == r && l >= d) {
        t = rt;
        d = l;
    }
    return (l > r) ? l : r;
};
var subtreeWithAllDeepest = function (root) {
    d = 0;
    traverse(root, 0);
    return t;
};
