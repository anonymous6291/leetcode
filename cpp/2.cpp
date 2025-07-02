/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* x, ListNode* y) {
        ListNode* r = new ListNode((x->val + y->val) % 10);
        ListNode* p = r;
        int c = (x->val + y->val) / 10;
        x = x->next;
        y = y->next;
        while (x != NULL || y != NULL) {
            int s = c;
            if (x != NULL) {
                s += x->val;
                x = x->next;
            }
            if (y != NULL) {
                s += y->val;
                y = y->next;
            }
            p->next = new ListNode(s % 10);
            p = p->next;
            c = s / 10;
        }
        if (c != 0)
            p->next = new ListNode(1);
        return r;
    }
};
