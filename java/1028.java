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
    public TreeNode recoverFromPreorder(String trav) {
        TreeNode tn[] = new TreeNode[1001];
        int v = 0, d = 0;
        for (char c : trav.toCharArray())
            if (c == '-') {
                if (v != 0) {
                    tn[d] = new TreeNode(v);
                    if (d != 0) {
                        TreeNode root = tn[d - 1];
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
                v = v * 10 + c - '0';
        if (d != 0) {
            TreeNode root = tn[d - 1];
            if (root.left == null)
                root.left = new TreeNode(v);
            else
                root.right = new TreeNode(v);
            return tn[0];
        } else
            return new TreeNode(v);
    }
}
