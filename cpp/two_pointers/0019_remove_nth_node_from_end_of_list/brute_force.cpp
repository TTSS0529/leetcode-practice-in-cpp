#include "remove_nth_node_from_end_of_list.hpp"

ListNode* Solution::removeNthFromEnd(ListNode* head, int n) {
    ListNode    dummp(0), *slow = &dummp, *fast = &dummp;
    dummp.next = head;
    while (n-- >= 0) {
        fast = fast->next;
    }
    while (fast) {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return dummp.next;
}