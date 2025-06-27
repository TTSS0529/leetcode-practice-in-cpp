#include "linked_list_cycle_ii.hpp"

ListNode    *Solution::detectCycle(ListNode *head) {
    std::unordered_set<ListNode *>  count;
    while (head) {
        if (count.count(head)) {
            return head;
        }
        count.insert(head);
        head = head->next;
    }
    return nullptr;
}