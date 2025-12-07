#include "sort_list.hpp"

ListNode* Solution::sortList(ListNode* head) {
    if (!head || !head->next) return head;
    ListNode    dummy(0);
    dummy.next = head;
    int n = 0;
    while (head) {
        ++n;
        head = head->next;
    }
    for (int step = 1; step < n; step <<= 1) {
        ListNode    *prev = &dummy, *curr = dummy.next;
        while (curr) {
            ListNode    *left = curr;
            ListNode    *right = split(left, step);
            ListNode    *next = split(right, step);
            ListNode    *tail = merge(left, right, prev);
            tail->next = next;
            prev = tail;
            curr = next;
        }
    }
    return dummy.next;
}

ListNode    *Solution::split(ListNode *head, int step) {
    if (!head) return head;
    for (int i = 1; head->next && i < step; ++i) head = head->next;
    ListNode    *rest = head->next;
    head->next = nullptr;
    return rest;
}

ListNode    *Solution::merge(ListNode *first, ListNode *second, ListNode *prev) {
    while (first && second) {
        if (first->val <= second->val) {
            prev->next = first;
            first = first->next;
        } else {
            prev->next = second;
            second = second->next;
        }
        prev = prev->next;
    }
    prev->next = first ? first : second;
    while (prev->next) prev = prev->next;
    return prev;
}