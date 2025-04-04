# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def __init__(self):
        self.t = None
        self.d = 0

    def traverse(self, root, h):
        if not root:
            return h
        l = self.traverse(root.left, h + 1)
        r = self.traverse(root.right, h + 1)
        if l == r and l >= self.d:
            self.t = root
            self.d = l
        return max(l, r)

    def subtreeWithAllDeepest(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        self.traverse(root, 0)
        return self.t
