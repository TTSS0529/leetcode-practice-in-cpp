#include "reverse_linked_list.hpp"

ListNode    *Solution::findBeforeLastNode(ListNode *head) {
    if (!head) {
        return nullptr;
    }
    ListNode    *before = head;
    while (head->next) {
        before = head;
        head = head->next;
    }
    return before;
}

ListNode    *Solution::reverseList(ListNode *head) {
    ListNode    dummy;
    ListNode    *tail = &dummy;
    ListNode    *tmp = findBeforeLastNode(head);
    while (tmp && tmp->next) {
        tail->next = tmp->next;
        tail = tail->next;
        tmp->next = nullptr;
        tmp = findBeforeLastNode(head);
    }
    if (tmp) {
        tail->next = tmp;
    }
    return dummy.next;
}