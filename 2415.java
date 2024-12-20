/**
 * Definition for a binary tree node.
 * public class TreeNode {
 * int val;
 * TreeNode left;
 * TreeNode right;
 * TreeNode() {}
 * TreeNode(int val) { this.val = val; }
 * TreeNode(int val, TreeNode left, TreeNode right) {
 * this.val = val;
 * this.left = left;
 * this.right = right;
 * }
 * }
 */
class Solution {
    public TreeNode reverseOddLevels(TreeNode root) {
        reverse(root.left, root.right, true);
        return root;
    }

    private void reverse(TreeNode r1, TreeNode r2, boolean odd) {
        if (r1 == null)
            return;
        if (odd) {
            int t = r1.val;
            r1.val = r2.val;
            r2.val = t;
        }
        reverse(r1.left, r2.right, !odd);
        reverse(r1.right, r2.left, !odd);
    }
}
