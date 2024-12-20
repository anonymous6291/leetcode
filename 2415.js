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
var reverseOddLevels = function (root) {
    var reverse = function (r1, r2, odd) {
        if (r1 === null)
            return;
        if (odd) {
            let t = r1.val;
            r1.val = r2.val;
            r2.val = t;
        }
        reverse(r1.left, r2.right, !odd);
        reverse(r1.right, r2.left, !odd);
    };
    reverse(root.left, root.right, true);
    return root;
};
