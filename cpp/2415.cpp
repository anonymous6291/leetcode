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
private:
    void reverse(TreeNode* r1, TreeNode* r2, bool odd) {
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

public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        reverse(root->left, root->right, true);
        return root;
    }
};
