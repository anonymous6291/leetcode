/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int max(int i, int j) { return (i > j) ? i : j; }

int height(struct TreeNode* r, int l) {
    if (r == NULL)
        return l;
    return max(height(r->left, l + 1), height(r->right, l + 1));
}

void find(struct TreeNode* r, int level, int* ar) {
    if (r == NULL)
        return;
    if (ar[level] < r->val)
        ar[level] = r->val;
    find(r->left, level + 1, ar);
    find(r->right, level + 1, ar);
}

int* largestValues(struct TreeNode* r, int* rs) {
    int n = height(r, 0);
    *rs = n;
    if (n == 0)
        return NULL;
    int* res = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        res[i] = -2147483648;
    find(r, 0, res);
    return res;
}
