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
    public int minimumOperations(TreeNode root) {
        int swaps = 0;
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        int ind[] = new int[1000001];
        while (!q.isEmpty()) {
            int n = q.size();
            int org[] = new int[n];
            for (int i = 0; i < n; i++) {
                TreeNode t = q.poll();
                if (t.left != null)
                    q.add(t.left);
                if (t.right != null)
                    q.add(t.right);
                org[i] = t.val;
                ind[t.val] = i;
            }
            Arrays.sort(org);
            for (int i = 0; i < n;)
                if (ind[org[i]] != i) {
                    int t1 = ind[org[i]];
                    int t2 = org[i];
                    org[i] = org[t1];
                    org[t1] = t2;
                    swaps += 1;
                } else
                    ++i;
        }
        return swaps;
    }
}
