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
    private int max(int i, int j) {
        return i > j ? i : j;
    }

    public List<Integer> largestValues(TreeNode root) {
        List<Integer> res = new ArrayList<>();
        perform(root, 0, res);
        return res;
    }

    private void perform(TreeNode r, int level, List<Integer> res) {
        if (r == null)
            return;
        if (res.size() == level)
            res.add(r.val);
        else
            res.set(level, max(res.get(level), r.val));
        perform(r.left, level + 1, res);
        perform(r.right, level + 1, res);
    }
}
