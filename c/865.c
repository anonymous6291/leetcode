/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* t;
int d;

int traverse(struct TreeNode* root, int h) {
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

struct TreeNode* subtreeWithAllDeepest(struct TreeNode* root) {
    d = 0;
    traverse(root, 0);
    return t;
}
