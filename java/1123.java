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
    TreeNode res;
    int d;

    private int traverse(TreeNode root, int depth) {
        if (root == null)
            return depth;
        int l = traverse(root.left, depth + 1);
        int r = traverse(root.right, depth + 1);
        if (l == r && l >= d) {
            d = l;
            res = root;
        }
        return l > r ? l : r;
    }

    public TreeNode lcaDeepestLeaves(TreeNode root) {
        traverse(root, 0);
        return res;
    }
}
