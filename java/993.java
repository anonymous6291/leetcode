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
    int x, y, m = -1, n = -1;
    boolean c = true;

    public void find(TreeNode r, int d) {
        if (r == null)
            return;
        if (r.left != null && r.left.val == x) {
            if (r.right != null && r.right.val == y)
                c = false;
            m = d;
        } else if (r.right != null && r.right.val == x) {
            if (r.left != null && r.left.val == y)
                c = false;
            m = d;
        }
        if (r.right != null && r.right.val == y)
            n = d;
        else if (r.left != null && r.left.val == y)
            n = d;
        find(r.left, d + 1);
        find(r.right, d + 1);
    }

    public boolean isCousins(TreeNode r, int x, int y) {
        this.x = x;
        this.y = y;
        find(r, 0);
        if (!c)
            return false;
        return m == n;
    }
}
