#include "swap_nodes_in_pairs.hpp"

ListNode* Solution::swapPairs(ListNode* head) {
    if (!head || !head->next) return head;
    ListNode    dummp(0), *pre = &dummp;
    while (head && head->next) {
        ListNode    *tmp = head->next;
        head->next = tmp->next;
        tmp->next = head;
        pre->next = tmp;
        pre = head;
        head = head->next;
    }
    return dummp.next;
}