#include "reverse_linked_list.hpp"

ListNode    *Solution::reverseList(ListNode *head) {
    ListNode    *pre = nullptr;
    ListNode    *curr = head;
    while (curr) {
        ListNode    *next = curr->next;
        curr->next = pre;
        pre = curr;
        curr = next;
    }
    return pre;
}