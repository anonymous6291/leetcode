/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {

    TreeNode* res = NULL;
    int d = 0;

private:
    int traverse(TreeNode* root, int depth) {
        if (root == NULL)
            return depth;
        int l = traverse(root->left, depth + 1);
        int r = traverse(root->right, depth + 1);
        if (l == r && l >= d) {
            d = l;
            res = root;
        }
        return l > r ? l : r;
    }

public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        traverse(root, 0);
        return res;
    }
};
