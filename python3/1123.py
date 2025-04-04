# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def __init__(self):
        self.d = 0
        self.r = 0

    def traverse(self, root, depth):
        if not root:
            return depth
        l = self.traverse(root.left, depth + 1)
        r = self.traverse(root.right, depth + 1)
        if l == r and l >= self.d:
            self.d = l
            self.r = root
        return max(l, r)

    def lcaDeepestLeaves(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        self.traverse(root, 0)
        return self.r
