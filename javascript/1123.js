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
var lcaDeepestLeaves = function (root) {
    var res = null, d = 0;
    var traverse = function (root, depth) {
        if (root == null)
            return depth;
        let l = traverse(root.left, depth + 1);
        let r = traverse(root.right, depth + 1);
        if (l == r && l >= d) {
            d = l;
            res = root;
        }
        return l > r ? l : r;
    };
    traverse(root, 0);
    return res;
};
