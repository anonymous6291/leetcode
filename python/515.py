# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def perform(self, r: Optional[TreeNode], level: int, res: List[int]):
        if r is None:
            return
        if len(res) == level:
            res.append(r.val)
        else:
            res[level] = max(res[level], r.val)
        self.perform(r.left, level + 1, res)
        self.perform(r.right, level + 1, res)

    def largestValues(self, r: Optional[TreeNode]) -> List[int]:
        res = []
        self.perform(r, 0, res)
        return res
