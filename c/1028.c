/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* recoverFromPreorder(char* trav) {
    struct TreeNode** tn =
        (struct TreeNode**)malloc(sizeof(struct TreeNode*) * 1001);
    int n = strlen(trav), v = 0, d = 0;
    for (int i = 0; i < n; i++)
        if (trav[i] == '-') {
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
            v = v * 10 + trav[i] - '0';
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
