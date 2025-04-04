/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* res;
int d;

int traverse(struct TreeNode* root, int depth) {
    if (!root)
        return depth;
    int l = traverse(root->left, depth + 1);
    int r = traverse(root->right, depth + 1);
    if (l == r && l >= d) {
        d = l;
        res = root;
    }
    return l > r ? l : r;
}

struct TreeNode* lcaDeepestLeaves(struct TreeNode* root) {
    res = NULL;
    d = 0;
    traverse(root, 0);
    return res;
}
