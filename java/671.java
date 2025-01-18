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
    long m1 = Integer.MAX_VALUE + 1L, m2 = Integer.MAX_VALUE + 1L;

    public int findSecondMinimumValue(TreeNode root) {
        find(root);
        return (int) (m2 == (Integer.MAX_VALUE + 1L) ? -1 : m2);
    }

    private void find(TreeNode r) {
        if (r == null)
            return;
        if (r.val < m1) {
            m2 = m1;
            m1 = r.val;
        } else if (r.val != m1 && r.val < m2)
            m2 = r.val;
        find(r.left);
        find(r.right);
    }
}
