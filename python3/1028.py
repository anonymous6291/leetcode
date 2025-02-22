# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def recoverFromPreorder(self, trav: str) -> Optional[TreeNode]:
        tn = [None] * 1001
        v = 0
        d = 0
        for c in trav:
            if c == "-":
                if v != 0:
                    tn[d] = TreeNode(v)
                    if d != 0:
                        root = tn[d - 1]
                        if root.left == None:
                            root.left = tn[d]
                        else:
                            root.right = tn[d]
                    v = 0
                    d = 0
                d += 1
            else:
                v = v * 10 + ord(c) - 48
        if d != 0:
            root = tn[d - 1]
            if root.left == None:
                root.left = TreeNode(v)
            else:
                root.right = TreeNode(v)
            return tn[0]
        else:
            return TreeNode(v)
