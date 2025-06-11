#include "partition_list.hpp"

ListNode    *Solution::partition(ListNode *head, int x) {
    if (!head || !head->next) {
        return head;
    }
    ListNode    dummy(0, head);
    ListNode    *tail = &dummy;
    ListNode    *prev = tail;
    while (head) {
        if (head->val < x) {
            prev->next = head->next;
            head->next = tail->next;
            tail->next = head;
            tail = tail->next;
            head = tail->next;
            prev = tail;
        } else {
            prev = head;
            head = head->next;
        }
    }
    return dummy.next;
}