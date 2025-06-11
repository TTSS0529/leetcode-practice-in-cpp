#include "reverse_linked_list.hpp"

ListNode    *Solution::reverseList(ListNode *head) {
    if (!head || !head->next) {
        return head;
    }
    ListNode    *result = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;
    return result;
}