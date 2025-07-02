# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(
        self, x: Optional[ListNode], y: Optional[ListNode]
    ) -> Optional[ListNode]:
        r = ListNode((x.val + y.val) % 10)
        p = r
        c = (x.val + y.val) // 10
        x = x.next
        y = y.next
        while x != None or y != None:
            s = c
            if x != None:
                s += x.val
                x = x.next
            if y != None:
                s += y.val
                y = y.next
            p.next = ListNode(s % 10)
            p = p.next
            c = s // 10
        if c != 0:
            p.next = ListNode(1)
        return r
