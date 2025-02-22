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
public:
    TreeNode* recoverFromPreorder(string trav) {
        struct TreeNode** tn =
            (struct TreeNode**)malloc(sizeof(struct TreeNode*) * 1001);
        int v = 0, d = 0;
        for (char c : trav)
            if (c == '-') {
                if (v != 0) {
                    struct TreeNode* tt =
                        (struct TreeNode*)malloc(sizeof(struct TreeNode));
                    tn[d] = tt;
                    tt->val = v;
                    tt->left = NULL;
                    tt->right = NULL;
                    if (d != 0) {
                        struct TreeNode* root = tn[d - 1];
                        if (root->left == NULL)
                            root->left = tt;
                        else
                            root->right = tt;
                    }
                    v = 0;
                    d = 0;
                }
                d++;
            } else
                v = v * 10 + c - '0';
        struct TreeNode* tt = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        tt->val = v;
        tt->left = NULL;
        tt->right = NULL;
        if (d != 0) {
            struct TreeNode* root = tn[d - 1];
            if (root->left == NULL)
                root->left = tt;
            else
                root->right = tt;
            return tn[0];
        } else
            return tt;
    }
};
