/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void reverse(struct TreeNode* r1, struct TreeNode* r2, int odd) {
    if (r1 == NULL)
        return;
    if (odd) {
        int t = r1->val;
        r1->val = r2->val;
        r2->val = t;
    }
    reverse(r1->left, r2->right, !odd);
    reverse(r1->right, r2->left, !odd);
}
struct TreeNode* reverseOddLevels(struct TreeNode* root) {
    reverse(root->left, root->right, 1);
    return root;
}
