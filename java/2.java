/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode x, ListNode y) {
        ListNode r = new ListNode((x.val + y.val) % 10), p = r;
        int c = (x.val + y.val) / 10;
        x = x.next;
        y = y.next;
        while (x != null || y != null) {
            int s = c;
            if (x != null) {
                s += x.val;
                x = x.next;
            }
            if (y != null) {
                s += y.val;
                y = y.next;
            }
            p.next = new ListNode(s % 10);
            p = p.next;
            c = s / 10;
        }
        if (c != 0)
            p.next = new ListNode(1);
        return r;
    }
}
