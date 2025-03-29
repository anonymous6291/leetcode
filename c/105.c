/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int* ind;

struct TreeNode* make(int n) {
    struct TreeNode* t = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    t->val = n;
    return t;
}

struct TreeNode* construct(int* ps, int* aoi, int psj, int aois, int aoie) {
    if (aois > aoie)
        return NULL;
    int root = ps[psj++];
    struct TreeNode* t = make(root);
    int i = ind[root + 3000];
    t->left = construct(ps, aoi, psj, aois, i - 1);
    t->right = construct(ps, aoi, psj + i - aois, i + 1, aoie);
    return t;
}

struct TreeNode* buildTree(int* preorder, int n, int* aoi, int aois) {
    ind = (int*)malloc(sizeof(int) * 6001);
    for (int i = 0; i < n; i++)
        ind[aoi[i] + 3000] = i;
    return construct(preorder, aoi, 0, 0, n - 1);
}
