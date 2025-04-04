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
    TreeNode* t = NULL;
    int d = 0;

private:
    int traverse(TreeNode* root, int h) {
        if (root == NULL)
            return h;
        int l = traverse(root->left, h + 1);
        int r = traverse(root->right, h + 1);
        if (l == r && l >= d) {
            t = root;
            d = l;
        }
        return (l > r) ? l : r;
    }

public:
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        traverse(root, 0);
        return t;
    }
};
