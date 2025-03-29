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
    private int ind[];

    private TreeNode construct(int ps[], int aoi[], int psj, int aois, int aoie) {
        if (aois > aoie)
            return null;
        int root = ps[psj++];
        TreeNode t = new TreeNode(root);
        int i = ind[root + 3000];
        t.left = construct(ps, aoi, psj, aois, i - 1);
        t.right = construct(ps, aoi, psj + i - aois, i + 1, aoie);
        return t;
    }

    public TreeNode buildTree(int[] preorder, int[] aoi) {
        int n = preorder.length;
        ind = new int[6001];
        for (int i = 0; i < n; i++)
            ind[aoi[i] + 3000] = i;
        return construct(preorder, aoi, 0, 0, n - 1);
    }
}
