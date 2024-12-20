# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def reverseOddLevels(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        def reverse(r1: Optional[TreeNode], r2: Optional[TreeNode], odd: bool):
            if r1 is None:
                return
            if odd:
                r1.val, r2.val = r2.val, r1.val
            reverse(r1.left, r2.right, not odd)
            reverse(r1.right, r2.left, not odd)

        reverse(root.left, root.right, True)
        return root
