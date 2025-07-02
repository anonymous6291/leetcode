/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* newListNode(int v) {
    struct ListNode* n = (struct ListNode*)malloc(sizeof(struct ListNode));
    n->val = v;
    n->next = NULL;
    return n;
}

struct ListNode* addTwoNumbers(struct ListNode* x, struct ListNode* y) {
    struct ListNode* r = newListNode((x->val + y->val) % 10);
    struct ListNode* p = r;
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
        p->next = newListNode(s % 10);
        p = p->next;
        c = s / 10;
    }
    if (c != 0)
        p->next = newListNode(1);
    return r;
}
