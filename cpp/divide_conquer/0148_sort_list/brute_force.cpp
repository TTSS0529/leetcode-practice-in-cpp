#include "sort_list.hpp"

ListNode* Solution::sortList(ListNode* head) {
    if (!head || !head->next) return head;
    ListNode    *mid = getMid(head);
    ListNode    *right = mid->next;
    mid->next = nullptr;
    ListNode    *left = sortList(head);
    right = sortList(right);
    return merge(left, right);
}

ListNode    *Solution::getMid(ListNode *head) {
    if (!head || !head->next) return head;
    ListNode    *slow = head, *fast = head;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode    *Solution::merge(ListNode *first, ListNode *second) {
    ListNode    dummy(0), *tail = &dummy;
    while (first && second) {
        if (first->val <= second->val) {
            tail->next = first;
            first = first->next;
        } else {
            tail->next = second;
            second = second->next;
        }
        tail = tail->next;
    }
    tail->next = first ? first : second;
    return dummy.next;
}