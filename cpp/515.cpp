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
    int max(int i, int j) { return (i > j) ? i : j; }

private:
    int height(TreeNode* r, int l) {
        if (r == NULL)
            return l;
        return max(height(r->left, l + 1), height(r->right, l + 1));
    }

private:
    void find(TreeNode* r, int level, vector<int>& ar) {
        if (r == NULL)
            return;
        if (ar[level] < r->val)
            ar[level] = r->val;
        find(r->left, level + 1, ar);
        find(r->right, level + 1, ar);
    }

public:
    vector<int> largestValues(TreeNode* r) {
        int n = height(r, 0);
        vector<int> res(n);
        for (int i = 0; i < n; i++)
            res[i] = -2147483648;
        find(r, 0, res);
        return res;
    }
};
