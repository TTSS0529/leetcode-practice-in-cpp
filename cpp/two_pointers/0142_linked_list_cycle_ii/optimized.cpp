#include "linked_list_cycle_ii.hpp"

ListNode    *Solution::detectCycle(ListNode *head) {
    ListNode    *slow = head;
    ListNode    *fast = head;
    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast) {
            ListNode    *tmp = head;
            while (tmp != slow) {
                slow = slow->next;
                tmp = tmp->next;
            }
            return tmp;
        }
    }
    return nullptr;
}