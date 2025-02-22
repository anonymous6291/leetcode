/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {string} traversal
 * @return {TreeNode}
 */
var recoverFromPreorder = function (traversal) {
    let tn = new Array(1001);
    let v = 0, d = 0;
    const nums = "0123456789";
    for (let c of traversal)
        if (c == '-') {
            if (v != 0) {
                tn[d] = new TreeNode(v);
                if (d != 0) {
                    let root = tn[d - 1];
                    if (root.left == null)
                        root.left = tn[d];
                    else
                        root.right = tn[d];
                }
                v = 0;
                d = 0;
            }
            d++;
        } else
            v = v * 10 + nums.indexOf(c);
    if (d != 0) {
        let root = tn[d - 1];
        if (root.left == null)
            root.left = new TreeNode(v);
        else
            root.right = new TreeNode(v);
        return tn[0];
    } else
        return new TreeNode(v);
};
