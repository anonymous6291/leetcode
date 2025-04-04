/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    TreeNode t;
    int d = 0;

    private int traverse(TreeNode root, int h) {
        if (root == null)
            return h;
        int l = traverse(root.left, h + 1);
        int r = traverse(root.right, h + 1);
        if (l == r && l >= d) {
            t = root;
            d = l;
        }
        return (l > r) ? l : r;
    }

    public TreeNode subtreeWithAllDeepest(TreeNode root) {
        traverse(root, 0);
        return t;
    }
}
