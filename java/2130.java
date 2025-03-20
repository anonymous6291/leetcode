/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int pairSum(ListNode head) {
        int n = 0;
        ListNode curr = head;
        while (curr != null) {
            curr = curr.next;
            n++;
        }
        int arr[] = new int[n], i = 0, max = 0;
        curr = head;
        while (i < n) {
            arr[i++] = curr.val;
            curr = curr.next;
        }
        n--;
        i = 0;
        while (i < n) {
            if (max < arr[i] + arr[n])
                max = arr[i] + arr[n];
            i++;
            n--;
        }
        return max;
    }
}
