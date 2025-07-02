/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} x
 * @param {ListNode} y
 * @return {ListNode}
 */
var addTwoNumbers = function (x, y) {
    let r = new ListNode((x.val + y.val) % 10), p = r;
    let c = parseInt((x.val + y.val) / 10);
    x = x.next;
    y = y.next;
    while (x != null || y != null) {
        let s = c;
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
        c = parseInt(s / 10);
    }
    if (c != 0)
        p.next = new ListNode(1);
    return r;
};
