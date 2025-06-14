#include "copy_list_with_random_pointer.hpp"

Node    *Solution::copyRandomList(Node *head) {
    if (!head) {
        return nullptr;
    }
    Node    dummy(0);
    Node    *curr = head;
    Node    *result = &dummy;
    while (curr) {
        result->next = new Node(curr->val);
        result = result->next;
        curr = curr->next;
    }
    curr = head;
    result = dummy.next;
    while (curr) {
        if (curr->random) {
            int index = 0;
            Node    *p = head;
            while (p && p != curr->random) {
                ++index;
                p = p->next;
            }
            p = dummy.next;
            while (index > 0) {
                p = p->next;
                --index;
            }
            result->random = p;
        }
        curr = curr->next;
        result = result->next;
    }
    return dummy.next;
}